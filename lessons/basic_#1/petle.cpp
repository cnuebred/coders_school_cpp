// PETLE
// Pętla służy do powtarzania instrukcji, które chcemy by się wykonały więcej niż raz bez konieczności ich wielokrotnego pisania w kodzie.
// Podstawowe pętle: while, for

// WHILE
// while używamy, gdy chcemy coś wykonać dopóki nie zostanie spełniony jakiś warunek. Przeważnie nie mamy pojęcia, kiedy to następy (nie znamy liczby kroków) np:

// Przeglądamy koszule w Internecie dopóki nie znajdziemy pasującej do nas
// Powtarzamy walkę z tym samym bossem aż go nie pokonamy
// Jemy zupę, aż talerz nie będzie pusty
// Przeszukujemy kontakty w telefonie aż nie znajdziemy interesującej nas osoby

// while (condition) {
//     // Do sth
// }


// FOR
// for używamy, gdy chcemy coś wykonać określoną liczbę razy. Przeważnie znamy liczbę kroków np:

// Wypełniamy ankietę składającą się z 10 pytań -> liczba kroków 10
// Przemieszczamy się z punktu A do B -> liczba kroków = dystans / długość kroku
// Piszemy egzamin składający się z 4 zadań -> liczba kroków (jak umiemy to 4, jak nie to jeszcze wykonujemy podprogram `ściągaj`)
// Zapinamy koszule (o ile nie wyrwiemy żadnego guzika)

// for (variable = initial_value; condition; variable_change) {
//     // Do sth
// }


// DO WHILE
// do {
//     // Do sth
// } while(condition)
// Kod w pętlach while lub for może się nie wykonać ani razu, gdy warunek nie będzie nigdy spełniony.

// Kod w pętli do/while wykona się co najmniej raz.


//ZADANIE 
#include <iostream>

// Write your function here
void printString(std::string x, int y){
    for(int i = 0; i < y; i++){
        std::cout << x;
    }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}