#include <iostream>
#include <array> // c++11

int main()
{
    /**
     * Array is just a pointer.
     * In this case, pointer of integers.
     */
    int data[5];
    for (int i = 0; i < 5; ++i)
    {
        data[i] = 2;
    }
    /**
     * When you try to examine the memory at this point:
     * gdb$ p &data         <- getting the memory address of data
     * gdb$ x/20xb <addr>   <- Print exact 20 bytes from the offset
     *
     * 0x02 0x00 0x00 0x00 0x02 0x00 0x00 0x00
     * 0x02 0x00 0x00 0x00 0x02 0x00 0x00 0x00
     * 0x02 0x00 0x00 0x00
     */

    /**
     * std::array is introduced in c++11.
     *
     * It's exactly the same as primitive array (pointers).
     * But instead of a type, it is an object.
     *
     * @link https://en.cppreference.com/w/cpp/container/array
     */
    std::array<short unsigned int, 5> smallData;
    smallData.fill(5);
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */