#include <iostream>

struct Entity_s {
    int x, y;
    float health;

    void Dump() {
        std::cout << "Entity_s{ x: " << x << ", y: " << y << ", health: " << health << "}" << std::endl;
    }
};

class Entity {
    public:
        int x, y;
        float health;

        void Dump() {
            std::cout << "Entity_c{ x: " << x << ", y: " << y << ", health: " << health << "}" << std::endl;
        }
};

int main() {
    /**
     * The only difference is a visibility.
     * 
     * By default, struct has public visibility.
     * And class is private.
     */
    Entity_s sEntity{
        .x = 0,
        .y = 0,
        .health = 10.0f
    };
    sEntity.Dump();

    Entity cEntity{
        .x = 5,
        .y = 5,
        .health = 8.5f
    };
    cEntity.Dump();
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */