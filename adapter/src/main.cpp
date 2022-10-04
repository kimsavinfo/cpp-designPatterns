#include <iostream>
#include "Adapter.hpp"

int main() {
    std::cout << "Adapter" << std::endl;

    ClassA *classA = new ClassA();
    std::cout << "ClassA: " << classA->functionA() << std::endl;
    
    ClassB *classB = new ClassB();
    std::cout << "ClassB: " << classB->functionB() << std::endl;
    
    Adapter *adapter = new Adapter(classB);
    std::cout << "ClassB: " << adapter->functionA() << std::endl;

    delete classA;
    delete classB;
    delete adapter;

    return 0;
}