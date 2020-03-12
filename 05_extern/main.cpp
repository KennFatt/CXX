#include <iostream>

/**
 * Extern the variable `aVal` and it ready to be defined
 *  by another source file.
 * 
 * External variable only can be defined by 1 single source.
 * In example, if you include `external_a.cpp` into the linker,
 * it does not build a proper result.
 */
extern int aVal;

int main() {
    std::cout << aVal << std::endl;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */