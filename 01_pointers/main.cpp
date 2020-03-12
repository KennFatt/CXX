#include <iostream>

int main() {
    int myVar = 12;
    /**
     * Basically, pointers is a variable that hold memory address of another variable.
     * In this example, variable `p_myVar` is holding memory address of `myVar`.
     * 
     * Pointer denoted with (*) asterisk symbol.
     */
    int *p_myVar = &myVar;
    std::cout << "Printing p_myVar: " << p_myVar << std::endl;

    /**
     * To modify a pointer, we must de-reference the variable.
     * See example below:
     */
    *p_myVar = (*p_myVar) - 2;
    std::cout << "Getting the value of `myVar` through a pointer: " << (*p_myVar) << std::endl;

    /**
     * Here is the example of pointer pointing to another pointer.
     * It works just like an array.
     */
    int **pointTo = &p_myVar;
    std::cout << "Printing pointTo: " << pointTo << std::endl;

    /**
     * Let's try to pointing a pointer to nullptr.
     * Nullptr is special c++ keyword (similar to NULL in C) that used to point into 0x0 memory address.
     * 
     * We're updating `p_myVar` to nullptr.
     * p_myVar -> 0x0
     * pointTo -> p_myVar -> 0x0
     * 
     * In the end:
     * pointTo == p_myVar == 0x0
     */
    p_myVar = nullptr;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */