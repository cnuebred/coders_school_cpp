// Wskazniki

#include <iostream>

int main(){
    int num = 5;
    int *ptr = &num;
    int *ptr2 = nullptr;
    std::cout << &ptr << "\n";
    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";
    std::cout << *ptr2 << "\n";
}

//stały wskaznik

const int * ptr; // stała zmienna

int const * ptr; // stała zmienna

int * const ptr; // stały wskaźnik - tzn wkaźnik się nie może się zmieniać

const int * const ptr; // staly wskaźnik na stałą
