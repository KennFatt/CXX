#include <iostream>

class Entity
{
  private:
    int x, *y;
    mutable int helper;

  public:
    Entity()
    {
        x = 0;
        y = new int;
        helper = 0;
    }

    /**
     * Const after method name is to flag
     * we don't modify any class members
     * inside this method.
     *
     * Therefore, you can't modify x, y, or anything
     * inside this method. Except, you declare new local variable.
     *
     * TIPS: It only make sense with getter method or similar in functionally.
     */
    int getX() const
    {
        // x = 2 + 2; Can't do this

        /**
         * In case you want modify class members in const method
         * you have to set that member as `mutable`.
         *
         * This might useful when debugging or anything else.
         */
        helper = 2;
        if (helper > 1)
        {
            return 0;
        }
        else
        {
            return x;
        }
    }

    /**
     * C++ in a nutshell.
     *
     * To understand this method, you have to understand how
     * this (example below) works:
     * const int *const a = new int;
     *
     * You can't modify the content and can't assign the lvalue into its pointer.
     */
    const int *const getY() const
    {
        return y;
    }
};

void PrintEntity(const Entity &e)
{
    std::cout << e.getX() << std::endl;
    std::cout << *(e.getY()) << std::endl;
}

int main()
{
    Entity e;
    PrintEntity(e);
}