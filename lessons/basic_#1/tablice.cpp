// TABLICE

// Tablice można traktować jak wagony w pociągu
// Ustawione kolejno jeden po drugim i połączone ze sobą
// Mogą pomieścić różne typy, jak człowiek, węgiel, itp.
// 10 wagonów z węglem możemy zapisać jako `Coal tab[10]` - oznacza to, że tworzymy tablicę, która przechowuje 10 elementów typu Coal (węgiel).


// W C++ tablica znajduje się w jednym, ciągłym obszarze w pamięci i jest nierozłączna (nie można usuwać jej elementów)
// Wszystkie elementy są tego samego typu
// Tablica jest zawsze indeksowana od 0
// tab[0] - pierwszy element tablicy tab
// tab[9] - ostatni element 10-elementowej tablicy tab

//MODYFIKACJA
// int tab[10];
// tab[0] = 1;
// tab[1] = 2;
// // ...
// tab[9] = 10;
// Można to zrobić lepiej z użyciem pętli.

// OPERATOR
// Do elementu tablicy odwołujemy się przez operator[]. 
// Musimy pamiętać, żeby zawsze odwoływać się do istniejącego elementu tablicy. 
// Inaczej program będzie miał niezdefiniowane zachowanie, gdyż spróbujemy uzyskać dostęp do pamięci, która nie należy do tablicy.
// Mówimy, że znajdują się tam śmieci. W najlepszym przypadku system operacyjny to wykryje i dostaniemy crash (segmentation fault). 
// W najgorszym będziemy działać na niepoprawnych losowych danych. 
// Skutki mogą być bardzo poważne (katastrofy promów kosmicznych, napromieniowanie od aparatury medycznej).

// int tab[10];
// tab[10] = 42;  // !!! undefined behavior (UB)

//ZADANIE 

#include <iostream>

constexpr size_t tab_size = 100;

int main() {
    int tab[tab_size];

    for (size_t i = 0; i < tab_size; ++i) {
        tab[i] = (2 * i) + 1;
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}