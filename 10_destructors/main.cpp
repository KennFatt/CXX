#include <iostream>

class Entity {
    int uid;
    int x, y;
    float health;

    public:
        Entity(int _uid) {
            std::cout << "Entity(" << _uid << ") created..." << std::endl;
            uid = _uid;

            x = 0;
            y = 0;
            health = 10.0f;
        }

        ~Entity() {
            std::cout << "Entity(" << uid << ") deleted!" << std::endl;
        }
};

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "Stack alocation:" << std::endl;

        Entity e(1);
        Entity e1(2);
        std::cout << " --- Bumper --- " << std::endl;
    } else {
        std::cout << "Heap alocation:"  << std::endl;

        Entity *e = new Entity(1);
        Entity *e1 = new Entity(2);
        std::cout << " --- Bumper --- " << std::endl;

        delete e;
        delete e1;
    }

    std::cout << "End program..." << std::endl;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */