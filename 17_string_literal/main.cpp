#include <iostream>
#include <string>

void PrintMessage(const char *s)
{
    std::cout << s << std::endl;
}

int main()
{
    /**
     * In this example we're calling method
     * and give its parameter with string literal.
     */
    PrintMessage("Literal string");

    // 8-bit (1 byte) for each character.
    // u8 is not necessary at all.
    const char *p = u8"A phrase with default char type.";

    // 16-bit (2 bytes) for each character.
    const wchar_t *phrase = L"A simple phrase.";
    const char16_t *phrase16 = u"A phrase with char16_t types.";

    // 32-bit (4 bytes) for each character.
    const char32_t *phrade32 = U"A phrase that expensive enough to print this message.";
}

/**
 * Created on: Thu Mar 12 17:31:49 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
