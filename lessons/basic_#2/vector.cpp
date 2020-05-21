// Utworzenie vektora
#include <iostream>
#include <vector>

 int maint() {
     std::vector<int> vec = {1, 2, 3, 4};
    // .size - zreczywiście ile elementów
    // .capacity - ile zarezerwował w pamięci
    // .push_back(arg) - dodaje element na koniec tablicy
    // odczytanie wartości == tak jak tablica
    // .at(index) - pobieramy wartość znajdująca się pod indexem
    // wektor jest kontenerem i posiada pewien zakres
    // {6, 7, 8, 9}
    // begin() i end() - begin - rozpoczęcie czyli 6, end - 1 element za ostatnim elementem vektora 
     std::cout << "hello world\n";
     return 0;
 }


#include <iostream>
#include <vector>
#include <string>

void printVector(std::vector<std::string> vec){
    for(const auto string : vec){
        std::cout << string << "\n";
    }
}

int mainss() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}

#include <iostream>
#include <vector>

std::vector<int> concatenateVector(std::vector<int> vec1, std::vector<int> vec2) {
    std::vector<int> vec3;
    int i = 0;
    for(auto el1 : vec1){
        vec3.push_back(el1);
        while(i < vec2.size()){
            vec3.push_back(vec2[i++]);
            break;
        };
    };
    return vec3;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5, 6};
    std::vector<int> vec2 {11, 12, 13, 14, 15, 16, 17, 18};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}