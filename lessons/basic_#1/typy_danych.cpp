//TYPY DANYCH


// MATMA
// 1 bajt == 8 bitów
// W binarnym totolotku wylosowane liczby mogą mieć `0` lub `1`
// Zatem podczas losowania 8 numerków możemy otrzymać przykładowo: `1 0 1 0 1 0 1 0`
// Takich kombinacji jest dokładnie `256 -> (2^8)`
// Zatem na 1 bajcie (8 bitach) możemy zapisać 256 liczb, np. od 0 do 255
// Jeżeli w totolotku losujemy 32 numerki, (32/8 = 4) czyli 4 bajty to takich kombinacji jest `2^32` (czyli ponad 4 miliardy)


// TYP PUSTY
// Nie można tworzyć obiektów typu `void`
// Służy do zaznaczenia, że funkcja nic nie zwraca
// Można tworzyć wskaźniki `void*` (zła praktyka w C++)
// NIE służy do oznaczania, że funkcja nie przyjmuje argumentów
// int fun(void) { /* ... */ }  // bad practice, C style
// int fun() { /* ... */ }      // good practice, C++ style


//TYPY LOGICZNE
// Rozmiar: 1 bajt(nie pomyłka, dzialamy na pełnych bajtach)
// sizeof(bool) == 1
// 2 możliwe wartości
// false
// true


// TYPY ZNAKOWE (CHAR)
// Rozmiar: 1 bajt
// 256 możliwych wartości
// char -> od -128 do 127
// unsigned char -> od 0 do 255

//WAZNE
// Przedrostek unsigned oznacza, że typ jest bez znaku (bez liczb ujemnych), czyli od 0 do jakieś dodatniej wartości.
// Rozmiar typów logicznych i znakowych to zawsze 1 bajt.
// Rozmiary dalszych typów zależą od platformy np. 32 bity, 64 bity.


// CALKOWITOLICZBOWE
// short (unsigned short) - co najmniej 2 bajty
// int (unsigned int) - co najmniej 2 bajty
// long (unsigned long) - co najmniej 4 bajty
// long long (unsigned long long) - co najmniej 8 bajtów


//TYPY ZMIENNOPRZECINKOWEJ
// float - zwykle 4 bajty
// double - zwykle 8 bajtów
// long double - zwykle 10 bajtów (rzadko stosowany)
// Typy zmiennoprzecinkowe zawsze mogą mieć ujemne wartości (nie istnieją wersje unsigned)
// Posiadają specjalne wartości:
// 0, -0 (ujemne zero)
// -Inf, +Inf (Infinity, nieskończoność)
// NaN (Not a Number)
// Uwaga! Porównanie NaN == NaN daje false

// Zaawansowana lektura: Standard IEEE754 definiujący typy zmiennoprzecinkowe || https://en.wikipedia.org/wiki/IEEE_754



// ALIASY TYPOW
// Istnieją też typy, która są aliasami (inne nazewnictwo w celu lepszego zrozumienia typu).

// std::size_t w zależności od kompilatora może być typu (unsigned short, unsigned int, unsigned long, unsigned long long). Przeważnie jest on typu unsigned int. Warto wykorzystywać go, gdy nasza zmienna będzie odnosić się do jakiegoś rozmiaru np. wielkość tablicy.

// Własne aliasy typów możemy tworzyć używając typedef lub using

// typedef int Number;
// Number a = 5;   // int a = 5;

// using Fraction = double;
// Fraction b = 10.2;  // double b = 10.2;


// TYP AUTO
// W pewnych miejscach możemy użyć typu auto. Kompilator sam wydedukuje typ, np. na podstawie przypisanej wartości.

//   auto num = 5;         // int
//   auto num = 5u;        // unsigned int
//   auto num = 5.5;       // double
//   auto num = 5.f;       // float
//   auto letter = 'a';    // char
//   auto num = false;     // bool
//   auto sth;             // compilation error, unable to deduce type


// ROZMIARY TYPOW
// Standard C++ definiuje taką zależność pomiędzy rozmiarami typów całkowitoliczbowych

// 1 == sizeof(char) \
//   <= sizeof(short) \
//   <= sizeof(int) \
//   <= sizeof(long) \
//   <= sizeof(long long);


// OPERACJE ARYTMETYCZNE
// Podstawowe: + - * /
// Modyfikujące zmienną: += -= *= /=
// Inkrementujące (+1) zmienną: ++
// Dekrementujące (-1) zmienną: --
//      Przykłady
            // int a = 5 + 7; // a = 12
            // int a = 5;
            // a += 7; // a = 12
            // int a = 5;
            // ++a; // a = 6
            // a--; // a = 5



// https://en.cppreference.com/w/cpp/language/types
// https://en.wikipedia.org/wiki/IEEE_754
