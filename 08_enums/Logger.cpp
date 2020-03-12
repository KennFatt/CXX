/**
 * The simple real implementation of Enums
 */
#include <iostream>

class Logger {
    private:
        int logLevel = LevelError;
    public:
        enum Level {
            LevelError = 0x0,
            LevelWarning = 0x1,
            LevelCritical = 0x2
        };

        void SetLevel(int level) {
            logLevel = level;
        }

        void Error(const char *m) {
            if (logLevel >= LevelError) {
                std::cout << "[Error] " << m << std::endl;
            }
        }

        void Warn(const char *m) {
            if (logLevel >= LevelWarning) {
                std::cout << "[Warn] " << m << std::endl;
            }
        }

        void Critical(const char *m) {
            if (logLevel >= LevelCritical) {
                std::cout << "[Critical] " << m << std::endl;
            }
        }
};

int main() {
    Logger log;
    log.SetLevel(Logger::LevelError);
    log.Error("There might be an error...");
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */