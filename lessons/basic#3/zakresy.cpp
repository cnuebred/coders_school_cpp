// Zasieg

//Zmienne lokalne - widziane w obrębie danego zakresu

//Zmienne globalne - widoczne dla wszystkich zakresów
#include <vector>
#include <iostream>
constexpr size_t vec_size = 5;
int x =2;
int main() {
    int x = 1;
    std::vector<int> vec;
    vec.reserve(vec_size);
    std::cout << "Hello World! \n";
    std::cout << x; //lokalna
    std::cout << ::x; // globalna
}