// List

#include <iostream>
#include <vector>
#include <list>

// Implement createSortedList
// It should take a vector and return a list of sorted elements
// add proper include :)

std::list<int> createSortedList(std::vector<int> vec){
    std::list<int> li;
    for(const auto &el : vec){
        li.push_back(el);
    }
    li.sort();
    return li;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}