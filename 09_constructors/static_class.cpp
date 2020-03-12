#include <iostream>

class Logger {
    public:
        /**
         * This constructor makes the object can't be declared.
         * 
         * It's useful for static class like this.
         * 
         * So, developers can't do something:
         * Logger l;
         * instead, doing this:
         * Logger:Log();
         */
        Logger() = delete;

        static void Log(const char *m) {
            std::cout << "[Log] " << m << std::endl;
        }
};

int main() {
    Logger::Log("A meaningful message.");
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */