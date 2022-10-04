#include "ClassA.hpp"
#include "ClassB.hpp"

class Adapter : public ClassA {
private:
    ClassB *classB;

public:
    Adapter(ClassB *classB) : classB(classB) {}

    std::string functionA() const override {
        std::string text_to_reverse = this->classB->functionB();
        std::reverse(text_to_reverse.begin(), text_to_reverse.end());
        return "Adapter: " + text_to_reverse;
    }
};