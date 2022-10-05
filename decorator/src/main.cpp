#include <string>
#include <iostream>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};

class Decorator : public Component {
protected:
    Component* component;

    public:
    Decorator(Component* otherComponent) : component(otherComponent) {
    }

    std::string Operation() const override {
        return this->component->Operation();
    }
};

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* otherComponent) : Decorator(otherComponent) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* otherComponent) : Decorator(otherComponent) {
    }

    std::string Operation() const override {
        return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};

void ClientCode(Component* otherComponent) {
    std::cout << "Result: " << otherComponent->Operation();
}

int main() {
    Component* simple = new ConcreteComponent;
    std::cout << "Client: simple component:" << std::endl;
    ClientCode(simple);
    std::cout << "\n\n";
    
    Component* decorator1 = new ConcreteDecoratorA(simple);
    Component* decorator2 = new ConcreteDecoratorB(decorator1);
    std::cout << "Client: a decorated component:" << std::endl;
    ClientCode(decorator2);
    std::cout << "\n";

    delete simple;
    delete decorator1;
    delete decorator2;

    return 0;
}