#include <iostream>

int main() {
    /**
     * Reference is a variable that referencing to another variable.
     * Assuming as an alias and you ready to go.
     * 
     * Like a pointer, it does not allocate new memory location.
     * You can mess around with GDB to proof it!
     */
    int myVar = 21;
    std::cout << "myVar: " << myVar << std::endl;

    /**
     * Referencing a varialbe is denoted with "&" (and) symbol.
     */
    int &myVarAlias = myVar;
    std::cout << "myVarAlias: " << myVarAlias << std::endl;

    /**
     * Modify the reference without any workaround.
     */
    myVarAlias = myVarAlias * 2 - 12;
    std::cout << "--- Modified ---" << std::endl;
    std::cout << "myVar: " << myVar << std::endl;
    std::cout << "myVarAlias: " << myVarAlias << std::endl;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */