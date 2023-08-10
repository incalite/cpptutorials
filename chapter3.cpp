#include <iostream>

int main() 
{
    int number = 5;
    bool flag = false;

    if (number > 0){
        std::cout << "the number is positive" << std::endl;
    } 
    else if (number < 0) {
        std::cout << "the number is negative" << std::endl;
    } 
    else {
        std::cout << "the number is zero" << std::endl;
    }

    if (flag){
        number = 100;
        std::cout << "the number is " << number << std::endl;
    }
}