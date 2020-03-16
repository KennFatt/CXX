/**
 * TL;DR
 *
 * Member Initializer is a way to simplify class members
 * initialization.
 *
 * You HAVE TO initialize in order as how the class declare it members.
 */

#include <iostream>

class Entity
{
    int x, y;
    float health;

  public:
    Entity(int _x, int _y, float _h) : x(_x), y(_y), health(_h)
    {
    }
};

class Player : public Entity
{
    const char *name;

  public:
    Player(const char *_name) : name(_name), Entity(0, 0, 10.0f)
    {
    }
};

int main()
{
    Player kennan = "Kennan";
}

/**
 * Created on: Mon Mar 16 13:32:18 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
