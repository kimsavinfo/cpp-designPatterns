#include <iostream>

class AnInterface {
public:
    virtual ~AnInterface() {}
    virtual std::string InterfaceImplementation() const = 0;
};

class ConcreteClassA : public AnInterface {
public:
    std::string InterfaceImplementation() const override {
        return "ConcreteClassA: function...\n";
    }
};
class ConcreteClassB : public AnInterface {
public:
    std::string InterfaceImplementation() const override {
        return "ConcreteClassB: function...\n";
    }
};

class Abstraction {
protected:
    AnInterface* implementation_;

public:
    Abstraction(AnInterface* implementation) : implementation_(implementation) {
    }

    virtual ~Abstraction() {
    }

    virtual std::string Operation() const {
        return "Abstraction: base operation with:\n" + this->implementation_->InterfaceImplementation();
    }
};

class ExtendedAbstraction : public Abstraction {
public:
    ExtendedAbstraction(AnInterface* implementation) : Abstraction(implementation) {
    }
    std::string Operation() const override {
        return "ExtendedAbstraction: extended operation with:\n" + this->implementation_->InterfaceImplementation();
    }
};

int main() {
    AnInterface* aClassWithInterface = new ConcreteClassA;
    Abstraction* abstraction = new Abstraction(aClassWithInterface);
    std::cout << abstraction->Operation() << std::endl;
    delete aClassWithInterface;
    delete abstraction;

    aClassWithInterface = new ConcreteClassB;
    abstraction = new ExtendedAbstraction(aClassWithInterface);
    std::cout << abstraction->Operation() << std::endl;
    delete aClassWithInterface;
    delete abstraction;

    return 0;
}
