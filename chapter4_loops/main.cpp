#include <iostream>


int main()
{
    for (int i = 0; i < 10; ++i){
        std::cout << "Hello" << std::endl;
    }

    int a = 0;
    while (a < 10){
        std::cout << "Hello" << std::endl;
        ++a;
    }

    int k = 0;
    do {
        std::cout << "Hello" << std::endl;
        ++k;
    } while (k < 10);

    k = 22;
    int x = 0;
    for(;;) {
        ++x;
        std::cout << x << std::endl;
        if (x == k)
            break;
    }

}