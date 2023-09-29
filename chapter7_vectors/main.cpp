#include <iostream>
#include <vector>

void printVector(std::vector<int>& n)
{
    for(int i = 0; i < n.size(); ++i)
        std::cout << n[i] << std::endl;
}

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(100);
    numbers[1] = 20;

    printVector(numbers); // initial state

    numbers.erase(numbers.begin() + 1); 
    std::cout << "----" << std::endl;

    printVector(numbers); // modified state

}