#include <iostream>
#include "func.h"

int main(){

    // &variable- adress of variable
    int a = 5;
    std::cout << "Przed funkcją: " << &a << " : " << a << std::endl;
    change(&a);
    std:: cout << "Po funkcji: " << &a << " : " << a << std::endl;
}

void change(int *x){
    *x = -1;
    std::cout << "Funkcja: " << x << " : " << *x << std::endl;
}