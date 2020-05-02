#include <iostream>

class Singleton {
public:
    Singleton(const Singleton&) = delete;

    static Singleton& getInstance() {
        static Singleton ISingleton;
        return ISingleton;
    }

    void nonStaticMethod() {
        std::cout << "nonStaticMethod()" << std::endl;
    }

private:
    Singleton() {}
};

int main(int argc, char** argv) {
    auto& a = Singleton::getInstance();
    a.nonStaticMethod();
}

/**
 * Created on: Sun May  3 00:51:02 2020
 * Compiler: gcc (Arch Linux 9.3.0-1) 9.3.0
 * OS: 5.6.8-arch1-1
 * Flags: -Wall -std=c++11 -g
 */
