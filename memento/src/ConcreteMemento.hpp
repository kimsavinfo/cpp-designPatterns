#include <string>
#include <ctime>

#include "Memento.hpp"

class ConcreteMemento : public Memento {
private:
    std::string state;
    std::string date;

public:
    ConcreteMemento(std::string inputState) : state(inputState) {
        this->state = inputState;
        std::time_t now = std::time(0);
        this->date = std::ctime(&now);
    }
    
    std::string GetState() const override {
        return this->state;
    }
    
    std::string GetName() const override {
        return this->date + " / (" + this->state.substr(0, 9) + "...)";
    }

    std::string GetDate() const override {
        return this->date;
    }
};