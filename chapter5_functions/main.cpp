#include <iostream>

bool checkPositive(int x)
{
    return (x > 0);
}


void sumNumberToPrint(double x, double y)
{
    std::cout << x + y << std::endl;
}

int main() 
{
    int number = 45;
    bool returnValue = checkPositive(number);
    if (returnValue)
    {
        std::cout << "The number is positive" << std::endl;
    }

    double a = 304.54;
    double b = 3992.334;
    sumNumberToPrint(a, b);
}