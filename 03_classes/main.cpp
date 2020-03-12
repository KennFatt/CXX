#include <iostream>

/**
 * Entity class
 */
class Entity {
    /**
     * We have to add `public` label to make its properties are accessible.
     * Visibility are in the next session.
     */
    public:
        int x, y;
        float health;
};

void printEntityInfo(Entity *e) {
    std::cout << "Entity{ x:" << e->x << ", y:" << e->y << ", health:" << e->health << " }" << std::endl;
}

int main() {
    /**
     * Declaring AND initializing the class with `myEntity` identifier.
     */
    Entity myEntity;
    myEntity.x = 0;
    myEntity.y = 0;
    myEntity.health = 10.0f;
    printEntityInfo(&myEntity);
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */