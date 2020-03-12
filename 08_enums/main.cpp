#include <iostream>

/**
 * Enums is used to giving a name into a value.
 * 
 * By default, enum has an 32-bit integer (int32_t) value starting from 0.
 * In this example:
 * CARROT = 0,
 * TOMATO = 1,
 * ... and so on.
 * 
 * You can assign a value like:
 * ORANGE = 6,
 * and the next type would be ORANGE + 1
 * BANANA = 7
 */
enum Veggies {
    CARROT, TOMATO, ORANGE, BANANA
};

/** enum Numbers members are now an uint8_t */
enum Numbers : uint8_t
{
    ONE = 1, TWO, THREE
};

/** Enums is trying to eliminate this kind of information */
int carrot = 0;
int tomato = 1;
int orange = 2;
int banana = 3;

int main() {
    Veggies myFav = BANANA;

    if (myFav == BANANA) {
        std::cout << "I like banana so much!" << std::endl;
    }

    Numbers myNumber = ONE;
    std::cout << "myNumber: " << myNumber << std::endl;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */