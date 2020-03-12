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
};

/**
 * Derived class
 */
class Player : public Entity
{
    const char *name;

  public:
    Player(const char *_name)
    {
        name = _name;
    }

    const char *getName()
    {
        return name;
    }
};

void PlayerInfo(Player *p)
{
    std::cout << "Player{ name:" << p->getName() << ", x:" << p->getX() << ", y:" << p->getY()
              << ", health:" << p->getHealth() << " }" << std::endl;
}

int main()
{
    Player *player = new Player("Kennan");
    PlayerInfo(player);

    delete player;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */