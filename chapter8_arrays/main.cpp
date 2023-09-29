#include <iostream>
#define N 10

int main()
{
    int tb[N] = { 0 };

    tb[0] = 1;
    tb[1] = 20;
    tb[2] = 100;

    for(int i = 0; i < N; ++i)
        tb[i] = i + 10;

    tb[3] = -1;

    for(int i = 0; i < N; ++i)
        std::cout << n[i] << std::endl;
}