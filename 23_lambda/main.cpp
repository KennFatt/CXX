#include <array>
#include <iostream>

class Dummy {
public:
    Dummy(const Dummy &) {
        std::cout << "Copy constructor called!" << std::endl;
    }

    Dummy() {
        std::cout << "New dummy has been constructed!" << std::endl;
    }
};

void ForEach(const std::array<int, 5> &arr, void (*callback)(int)) {
    for (unsigned int i = 0; i < arr.size(); i++) {
        callback(arr[i]);
    }
}

int main() {
    std::array<int, 5> myArr = {1, 2, 3, 4, 5};
    ForEach(myArr, [](int x) -> void { std::cout << "X: " << x << std::endl; });

    std::cout << "---" << std::endl;

    /**
     * & => by references
     * = => by values
     */
    auto myLambda = [&]() -> void {
        myArr[0] = 7;
    };
    myLambda();

    ForEach(myArr, [](int x) -> void { std::cout << "X: " << x << std::endl; });

    std::cout << "---" << std::endl;

    Dummy a;
    /** Zero cost abstraction! */
    auto myAnotherLambda = [&]() {
        auto &b = a;
    };
    myAnotherLambda();
}

/**
 * Created on: Mon Mar 16 14:57:49 2020
 * Compiler: gcc (Debian 9.2.1-31) 9.2.1 20200306
 * OS: 5.4.0-4-amd64
 * Flags: -Wall -std=c++11 -g
 */
