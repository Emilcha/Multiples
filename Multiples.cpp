// Multiples.cpp
// 

#include <iostream>
#include <chrono>


int main()
{
    int input{0};
    std::cin >> input;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i{ 0 }; i <= input; i++)
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
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << duration.count() << "sec for " << input << std::endl;
}
