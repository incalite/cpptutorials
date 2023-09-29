#include <iostream>

void print(int& x)
{
    std::cout << x << std::endl;
}

int main()
{
    int num = 40;
    int* ptr = &num;
    print(num);
    std::cout << num << std::endl;
    std::cin.get();
}