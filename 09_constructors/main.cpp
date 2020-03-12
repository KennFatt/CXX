/**
 * TL;DR
 * 
 * Constructor is a special method that fired up when
 * an object is being initialized.
 * 
 * The visibility of a constructor is public.
 */

#include <iostream>

class Entity {
    int x, y;
    float health;

    public:
        /**
         * This method is called a constructor.
         * 
         * The main objective of constructor is to eliminate
         * separated initialization.
         * I.e:
         * 
         * Object o;
         * o.Init(); -- This is unnecessary!
         */
        Entity() {
            x = 0;
            y = 0;
            health = 10.0f;
        }

        /**
         * A constructor with parameter.
         */
        Entity(int _x, int _y) {
            x = _x;
            y = _y;
            health = 10.0f;
        }

        void Print() {
            std::cout << "Entity{x:" << x << ", y:" << y << ", health: " << health << "}" << std::endl;
        }
};

int main() {
    Entity e;
    e.Print();

    Entity e1(12, 4);
    e1.Print();
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */