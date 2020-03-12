/**
 * TL;DR
 * 
 * Static is used to be accessible by cross-class.
 * Static can't access non-static.
 */
#include <iostream>

struct Entity {
    /** Assign a static keyword right before the data type */
    static int x, y;

    void Dump() {
        std::cout << x << ", " << y << std::endl;
    }
};

/**
 * You can't directly acces Entity::x or any static property
 * that have not defined before.
 * 
 * By doing this, you can access and modify the static property
 * anywhere.
 */
int Entity::x;
int Entity::y;

int main() {
    /**
     * Create a new instance and modify its properties.
     * 
     * This example below are just a test case.
     * In real implementation of `static` structs or classes
     * you don't have to instantiate the variable.
     * 
     * Example:
     * Entity::x = 2;
     * Entity::y = 1;
     * 
     * if the Dump function is also a static:
     * Entity::Dump();
     */
    Entity e;
    e.x = 2;
    e.y = 1;
    e.Dump();

    /** Create another instance */
    Entity e1;
    e1.x = 124;
    e1.y = 41;
    e1.Dump();

    /**
     * Try to print out both information.
     * 
     * Expected result:
     *  124, 41
     *  124, 41
     * 
     * The reason it has the same value because it is a STATIC.
     * In another hand, static is a sharable memory.
     * 
     * Use GDB to find out the memory address of:
     * `&e.x` and `&e1.x`
     * It will return the same and exact value.
     * 
     * When you try to getting the `sizeof` the variable (struct Entity)
     * it will gives you 1 Byte.
     * Because it stores nothing. The x and y property is somewhere else
     * out of the struct.
     */
    std::cout << "--- Dump ---" << std::endl;
    e.Dump();
    e1.Dump();
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */