// Mapy

// #include <iostream>
// #include <map>
// #include <string>

// void Prints(const std::map<size_t, std::string>& map) {
//     for (const auto& pair : map) {
//         std::cout << pair.first << " | " << pair.second << '\n';
//     }
// }

// int maint() {
//     std::map<size_t, std::string> discs {
//         {1, "The Lord of the Rings: The Fellowship of the Ring"},
//         {2, "The Lord of the Rings: The Two Towers"},
//         {3, "The Lord of the Rings: The Return of the King"}
//     };

//     Prints(discs);
//     std::cout << "\nAfter adding a new element\n";
//     discs[4] = "Harry Potter";
//     Print(discs);
//     std::cout << "\nAfter modification of an element\n";
//     discs[4] = "Harry Potter and the Philosopher's Stone";
//     Print(discs);
// }


#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list

std::map<size_t, std::string> createMap(std::vector<int> vec, std::list<std::string> str){
    std::map<size_t, std::string> map;
    size_t i = 1;
    for(auto el : str){
        map[i++] = el;
    }
    return map;
}


int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}