// FUNKCJE

// Funkcja jest to fragment programu, któremu nadano nazwę i który możemy wykonać poprzez podanie jego nazwy oraz ewentualnych argumentów.

// Funkcja == podprogram == procedura

// Przykładowo, w trakcie jazdy na rowerze naszą główną funkcją jest przemieszczanie się z punktu a do b. 
// Jednak wykonujemy także kilka podprogramów, jak zmiana biegów, hamowanie, rozpędzanie, skręcanie. 
// Podobnie w programie możemy wydzielić konkretne zachowania i przenieść je do funkcji, które nazwiemy tak, by sugerowały co robią. 
// Ważne, aby funkcja robiła tylko jedną rzecz. Jedna funkcja zmienia biegi, druga hamuje, trzecia skręca.



// SYGNATURY FUNKCJI
// void fun(int) - funkcja ma nazwę fun, nic nie zwraca a przyjmuje jeden argument typu int.

// ===Odgadnijcie sygnatury po opisie===
// Funkcja o nazwie foo, która nic nie zwraca a przyjmuje jeden argument typu double.

// void foo(double)

// Funkcja o nazwie bar, która zwraca typ double a przyjmuje 2 argumenty. 
// Pierwszy to float, a drugi to const int (const oznacza, że wartość ta nie może zostać zmodyfikowana).

// double bar(float, const int)



// WYWOŁANIE FUNKCJI
// foo(5.0) -> wywołujemy funkcję foo z argumentem double, który jest równy 5.0
// double result = bar(5.4f, 10) -> wywołujemy funkcję bar z argumentem float (5.4f) oraz int (10) a jej wynik przypisujemy do zmiennej typu double o nazwie result.

// ZADANIE
// Dopisz brakującą funkcję multiply. Ma ona pomnożyć dwie liczby podane jako jej parametry. Pobierz zadanie

#include <iostream>

// Write missing function here

int multiply(int a, int b) {
    return a * b;
}
int main() {
    std::cout << "4 * 5: " << multiply(4, 5) << "\n";
    std::cout << "10 * 5: " << multiply(10, 5) << "\n";
    std::cout << "-5 * 5: " << multiply(-5, 5) << "\n";

    return 0;
}