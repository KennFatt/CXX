#include <iostream>

int EvalFalse(const int &val)
{
    return val > 1 ? val : 0;
}

int main()
{
    /**
     * TL;DR Ternary is a shorthand of if-else statement.
     */
    int x, y;
    x = 23;
    y = true ? x + 2 : 0;
    std::cout << y << std::endl;

    std::cout << EvalFalse(2) << std::endl;
}

/**
 * Created on: Mon Mar 16 13:40:18 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
