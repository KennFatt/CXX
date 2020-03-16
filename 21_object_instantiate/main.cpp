#include <iostream>

class Entity
{
  private:
    int x, y;

  public:
    /** Disable default constructor */
    Entity() = delete;

    Entity(int _x, int _y) : x(_x), y(_y)
    {
        std::cout << "Creating an entity {x:" << _x << ", y:" << _y << "}" << std::endl;
    }
};

int main()
{
    /**
     * In C++ there are so many way to instantiate an object.
     *
     * For example, if you write a code like this:
     * Entity e;
     *
     * That mean you create and instantiate a new object in `e` variable.
     * It calls the default constructor if the class.
     *
     * But this example would not show that way, because I disable
     * the default constructor.
     */
    Entity a = {1, 1};
    Entity b = Entity(2, 2);
    Entity c(3, 3);

    /**
     * If you're a Java / C# programmer, you might using `new`
     * keyword all the time to create an object.
     *
     * C++ offer a good choice to allocating memory. Whether is on the
     * stack or the heap.
     *
     * NOTE: Use stack allocation as many as possible. Because it has O(1) complexity.
     * Don't forget to use `delete` keyword after allocating on the heap to prevent memleak.
     */
    Entity *d = new Entity(4, 4);
    delete d;
}

/**
 * Created on: Mon Mar 16 13:45:46 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
