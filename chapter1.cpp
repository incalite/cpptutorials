#include <iostream>

void printMsg();

int main() {
    printMsg();
}

void printMsg() 
{
    std::cout << "Hello there world!" << std::endl;
    std::cin.get();
}