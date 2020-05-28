// referencje - wskaźniki
#include <iostream>

int value = 5;
int& ref = value;

void foo(std::string& str){
    str = "other string";
}

int main() {
    std::string str("some string");
    foo(str);
    std::cout << str;
    return 0;
}