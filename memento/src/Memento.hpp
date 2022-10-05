#include <string>

class Memento {
public:
    virtual ~Memento() {}
    virtual std::string GetName() const = 0;
    virtual std::string GetDate() const = 0;
    virtual std::string GetState() const = 0;
};