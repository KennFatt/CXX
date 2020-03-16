#include <iostream>

int main()
{
    /**
     * Const is an immutable variable.
     *
     * You can't change this variable since it's flagged
     * as a constant.
     */
    const int immutableVariable = 21;
    /**
     * Try to copy the value of `immutableVariable` above
     * to new int pointer.
     *
     * We can modify by dereferencing but we can't assign directly
     * without a casting.
     *
     * You can't:
     * modifyConst = &immutableVariable; // Since immutableVariable has `const int *`.
     */
    int *modifyConst = new int;
    *modifyConst = immutableVariable + 2;
    // Try explicitly casting
    modifyConst = (int *)&immutableVariable; // it works fine, but do not use this way.

    /** Expression must be a modifiable lvalue. */
    // immutableVariable = 2; // our lvalue is a const and not modifiable.

    int dummy = 23;
    /**
     * Const before asterisk (*) means
     * that you can't modify its content.
     *
     * Note, some people might use this way instead:
     * int const *a = new int; it does the same.
     *
     * I.e:
     * *a = 2;
     *
     * But you can assign it with another lvalue.
     * a = &immutableVariable;
     */
    const int *a = new int;
    a = &dummy;
    a = &immutableVariable;
    std::cout << *a << std::endl;

    /**
     * In the otherside, const after asterisk (*) means
     * that you can modify its content. But you can't assign
     * it with anohter lvalue.
     *
     * It won't work:
     * b = &dummy; or else.
     */
    int *const b = new int;
    *b = 2;
    std::cout << *b << std::endl;

    /**
     * Now we can do something like this.
     *
     * Here, we're talking about the pointer itself
     * and/or its content.
     *
     * We can't assign the pointer to point another lvalue
     * And we can't modify its content (by dereferencing).
     */
    const int *const c = new int;
    // These lines won't work.
    // *c = 2;
    // c = &dummy;
}

/**
 * Created on: Sun Mar 15 19:53:31 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
