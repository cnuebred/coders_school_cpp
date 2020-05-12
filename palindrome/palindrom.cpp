#include <iostream>
#include <string>

std::string str;

bool isPalindrome(const std::string & text) {
    return text == std::string(text.rbegin(), text.rend());
}

int main() {
    std::cout << "Podaj wyraz: " << std::endl;
    getline(std::cin, str);
    std::cout << "Podany wyraz: " << str << std::endl;
    if(isPalindrome(str)){
        std::cout << "Wyraz jest palindromem";
    } else { 
        std::cout << "Wyraz nie jest palindromem";
    }
    return 0;
}