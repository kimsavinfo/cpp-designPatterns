#include <string>

class ClassA {
    public:
    virtual ~ClassA() = default;

    virtual std::string functionA() const {
        return "Class's behavior.";
    }
};