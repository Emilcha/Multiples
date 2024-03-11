// Multiples.cpp
// 
#include <iostream>
#include "Timer.h"

void multiples(int n)
{
    Timer time;
    for (int i{ 1 }; i <= n; i++)
    {
        std::cout << "Multiples of " << i << " are : |";
        for (int j{ 1 }; j <= i; j++)
        {
            if (i % j == 0)
            {
                std::cout << j << "|";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    int input{0};
    std::cin >> input;
    multiples(input);
}
