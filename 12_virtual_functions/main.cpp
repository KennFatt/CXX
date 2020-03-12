#include <iostream>

/**
 * Base class
 */
class Entity
{
    int x, y;
    float health;

  public:
    Entity()
    {
        x = 0;
        y = 0;
        health = 10.0f;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    float getHealth()
    {
        return health;
    }

    /**
     * Add virtual keyword before a function / method
     * and make it available to be overriden.
     */
    virtual bool isMovable()
    {
        return false;
    }
};

/**
 * Derived class
 */
class Player : public Entity
{
    const char *name;
    bool movable;

  public:
    Player(const char *_name)
    {
        name = _name;
        movable = true;
    }

    const char *getName()
    {
        return name;
    }

    /**
     * Since c++11, the override keyword
     * is not neccessary at all.
     *
     * But for the clarity, we suppose to add it.
     */
    bool isMovable() override
    {
        return movable;
    }
};

void PrintEntityMovable(Entity *e)
{
    std::cout << "Entity movable: " << e->isMovable() << std::endl;
}

int main()
{
    Player player("Kennan");
    Entity entity;

    PrintEntityMovable(&player); // 1
    PrintEntityMovable(&entity); // 0
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */