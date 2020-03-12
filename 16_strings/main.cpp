#include <iostream>

int main()
{
    /**
     * In C++, you can use `std::string` to define a string.
     * This is not a primitive type, it's an object.
     *
     * We could use its method like std::string::size() to get its size (length).
     * or convert it to C string style by doing std::string::c_str().
     *
     * More method informations:
     * @link http://www.cplusplus.com/reference/string/string/
     */
    std::string greet = "Hello";

    /**
     * In C, we could define a string with `const char *` type.
     * String is a list of characters. Each character has 1 byte size (u8).
     *
     * So the letter "Hello" has a size of 6 bytes.
     * But it only contains 5 character, is not it?
     */
    const char *mystring = greet.c_str();

    /**
     * Null terminator existance and why its important
     * to your string.
     *
     * Let's debug the variable below `name[6]`
     * [0] -> K
     * [1] -> e
     * [2] -> n
     * [3] -> n
     * [4] -> a
     * [5] -> n
     * Its fit to the size and we expected nothing is wrong.
     *
     * Actually it would print something like:
     * "Kennan����" with extra unknown and random bytes at the end.
     *
     * That's because we do not put a null-terminator.
     * Null-terminator can be defined as (int) 0x0 or (u8) '\0'.
     */
    // const char name[6] = {'K', 'e', 'n', 'n', 'a', 'n'};

    /**
     * Let's add 1 more byte for null-terminator `name[7]`.
     * In C++, it automatically add null terminator at the end of array
     * even we don't put anything there.
     */
    const char name[7] = {'K', 'e', 'n', 'n', 'a', 'n'};
    std::cout << name << std::endl;

    /**
     * Let's find out with null-terminator in the middle
     * of sequence.
     */
    const char phrase[] = "Mean\0ingful phrase";
    /** Obviously, \0 would break your character sequence. And print out: Mean */
    std::cout << phrase << std::endl;
}