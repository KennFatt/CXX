#include <iostream>

/**
 * Base class
 */
class Entity
{
  private:
    int x, y;
    float health;

    /**
     * The only way to access this method is this class itself.
     */
    void updateHealth(float h)
    {
        health = h;
    }

  protected:
    void updatePosition(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

  public:
    Entity()
    {
        x = 0;
        y = 0;
        updateHealth(10.0f);
    }

    void displayInformation()
    {
        std::cout << "Entity{ x:" << x << ", y:" << y << ", health:" << health << "}" << std::endl;
    }
};

class Player : public Entity
{
  private:
    const char *name;

  public:
    Player(const char *_name) : name(_name)
    {
        /**
         * Entity::updatePosition() is a protected
         * method, but it's accessible by its derived class.
         */
        updatePosition(5, 5);
    }

    const char *getName()
    {
        return name;
    }
};

int main()
{
    Player *p = new Player("icsmooke");
    /**
     * The only accessible method is
     * a method that has public visibility.
     */
    p->displayInformation();
    const char *pName = p->getName();
    std::cout << "PlayerName: " << pName << std::endl;

    delete p;
}

/**
 * Compiler: g++ (gcc version 9.2.1)
 * OS: Linux 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */