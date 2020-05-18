//INSTRUKCJE WARUNKOWE  


// Instrukcja warunkowa to nic innego jak zadanie programowi pytania np.:

// Czy otrzymałeś już wszystkie dane?
// Czy życie bossa spadło do 0?
// Czy osiągnięcie zostało zdobyte przez gracza?
// Czy liczba jest większa od maksymalnie dopuszczanej?


// UZYCIE
// if (condition) {
//     // do sth
// }



// LACZENIE WARUNKOW
// <-- A co w przypadku, gdy wiele informacji musi być spełnionych? Możemy połączyć warunki operatorem lub (||, or) bądź i (&&, and) -->NOR

// if (are_potatoes_eatten && is_meat_eatten && is_salad_eatten)
// Wszystkie 3 warunki muszą zostać spełnione

// if (player_has_20_dex || player_has_18_int || player_has_22_str)
// W tym przypadku wystarczy spełnić jeden z 3 warunków. Mogą zostać spełnione wszystkie, ale wystarczy by został spełniony jeden dowolny.


// INSTRUKCJE ELSE
// Jeżeli program może różnie zareagować na spełnienie jakiś warunków możemy zastosować konstrukcje if else
// if (number < 2) {
//     critical_miss();
// } else if (number < 18) {
//     hit();
// } else {
//     critical_hit();
// }


// SWITCH/CASE
// char option = getInput();
// switch (option) {
// case 'l':
//     goLeft();
//     break;
// case 'r':
//     goRight();
//     break;
// default:
//     exit();
// }
// case oznacza konkretny przypadek
// break informuje, że wychodzimy z instrukcji warunkowej switch i konstytuujemy dalej program. Jego brak spowoduje, że wykonają się instrukcje z kolejnego case.
// deafult jest to miejsce gdzie program dotrze, gdy żaden inny warunek nie zostanie spełniony

// ZADANIE
// Dopisz funkcję max. Ma ona zwracać maksymalną z trzech podanych wartości. Pobierz zadanie

#include <iostream>

// Write your function here
int max(int a, int b, int c){
    if(a > b && a > c) return a;
    else if(b > a && b > c) return b;
    return c;
}
int main() {

    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}