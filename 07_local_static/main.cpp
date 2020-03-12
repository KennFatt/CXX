#include <iostream>

int yield() {
    /** This called a local static */
    static int i = 0;

    /**
     * This function is returning the exact same value from one memory address of `i`.
     * Everytime it returing a value, `i` got increased by one.
     */
    return i++;
}

int main() {
    /**
     * Try to get some integers and store it into separated variable.
     * 
     * The value of each variable:
     * x -> 0
     * y -> 1
     * z -> 2
     */
    int x = yield();
    int y = yield();
    int z = yield();

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */