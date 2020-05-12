#include <iostream>

void f1(std::string zmienna){zmienna += " nowy"; std::cout << zmienna << std::endl;}
void f2(std::string *zmienna) {*zmienna += " nowy"; std::cout << zmienna << std::endl;}
void f3(std::string &zmienna) {zmienna += " nowy"; std::cout << zmienna << std::endl;}

int main(){
std::string str = "tekst";
std::string *wsk = &str;
//std::cout << wsk << std::endl;
//f1(str); //tutaj stworzy lokalnie kopie str ale po wyjsciu str nie zmieni się
//f2(wsk); //tutaj podajesz wskaznik, ktory wskazuje na str i zmieni str po wyjsciu z funkcji
f3(str); //tutaj referencja rowniez zmieni str po wyjsciu z funkcji
std::cout << str << std::endl;
std::cout << str << std::endl; //Tu wyswietli wartosc czyli "tekst nowy"
std::cout << &str << std::endl; //tutaj adres pod ktorym jeststr
std::cout << wsk << std::endl; //tutaj bedzie to samo co &str czyli jego adres - adres str.
std::cout << *wsk << std::endl; //tutaj to samo co str czyli wartosc - "teskt nowy"
std::cout << &wsk << std::endl; //a tutaj bedzie adres zmiennej 
std::cout << &wsk << std::endl; //a tutaj bedzie adres zmiennej 
return 0;
}