/**
 * TL;DR
 *
 * Auto keyword will automatically detect variable data type.
 * It more looks like programming language that is not static typed.
 */

#include <iostream>
#include <vector>
#include <unordered_map>

const char *getName()
{
    return "Kennan";
}

/**
 * Trailing type for method that has auto type.
 *
 * Minimum c++11
 */
auto getNameCxx11() -> std::string
{
    return "Kennan";
}

class Device
{
};

class DeviceManager
{
  private:
    std::unordered_map<std::string, std::vector<Device *>> devices;

  public:
    const std::unordered_map<std::string, std::vector<Device *>> &getDevices() const
    {
        return devices;
    }
};

int main()
{
    /**
     * Function getName() returning a `const char *` tpye.
     */
    auto myName = getName();
    std::cout << myName << std::endl;

    auto myNameCxx11 = getNameCxx11();
    std::cout << myNameCxx11.size() << std::endl;

    /**
     * Create a string object from `const char *` type.
     */
    std::string sMyName = getName();
    std::cout << sMyName.size() << std::endl;

    /**
     * Auto might useful for variable that has long enough data type.
     *
     * Look example below:
     */
    DeviceManager dm;
    // const std::unordered_map<std::string, std::vector<Device *>> &devices = dm.getDevices();

    /** Eliminate the mess with auto */
    const auto &devices = dm.getDevices();

    /**
     * It also might useful for vector::iterator.
     */
    std::vector<std::string> fruits;
    fruits.push_back("Apple");
    fruits.push_back("Orange");
    // for (std::vector<std::string>::iterator it = fruits.begin(); it < fruits.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }
    for (auto it = fruits.begin(); it < fruits.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

/**
 * Created on: Mon Mar 16 14:34:51 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
