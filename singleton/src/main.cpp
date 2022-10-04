#include <iostream>
#include "Singleton.hpp"

Singleton* Singleton::instance = 0;

int main() {
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout << s << std::endl;
    std::cout << r << std::endl;
}