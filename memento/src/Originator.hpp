#include <iostream>
#include <string>

#include "ConcreteMemento.hpp"

class Originator {
 private:
    std::string state;

    std::string GenerateRandomString(int length = 10) {
        const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
        int stringLength = sizeof(alphanum) - 1;

        std::string random_string;
        for (int i = 0; i < length; i++) {
        random_string += alphanum[std::rand() % stringLength];
        }
        return random_string;
    }

    public:
    Originator(std::string inputState) : state(inputState) {
        std::cout << "Originator: My initial state is: " << this->state << "\n";
    }
    
    void DoSomething() {
        std::cout << "Originator: I'm doing something important.\n";
        this->state = this->GenerateRandomString(30);
        std::cout << "Originator: and my state has changed to: " << this->state << "\n";
    }

    Memento *Save() {
        return new ConcreteMemento(this->state);
    }
    
    void Restore(Memento *memento) {
        this->state = memento->GetState();
        std::cout << "Originator: My state has changed to: " << this->state << "\n";
    }
};
