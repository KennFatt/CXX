#include <iostream>

/**
 * An interface (pure virtual function)
 *
 * Use it as a "template" and don't add anything
 * else except functions.
 */
class Callable
{
  public:
    virtual void call() = 0;
};

/**
 * Base class
 */
class Entity : public Callable
{
    int x, y;
    float health;

  public:
    Entity(int _x, int _y, float _h) : x(_x), y(_y), health(_h)
    {
    }

    void call() override
    {
        std::cout << "Entity::call()..." << std::endl;
    }
};

/**
 * Derived class
 *
 * We have to implements a method from Callable in this class,
 * because its parent is implementing the interface.
 */
class Player : public Entity
{
    const char *name;

  public:
    Player(const char *_name) : Entity(0, 0, 10.0f), name(_name)
    {
    }

    void call() override
    {
        std::cout << "Player::call()..." << std::endl;
    }
};

void caller(Entity *e)
{
    e->call();
}

int main()
{
    Entity e(0, 0, 10.0f);
    Player p("icsmooke");

    caller(&e);
    caller(&p);
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */