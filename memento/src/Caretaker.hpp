#include <vector>

#include "Originator.hpp"

class Caretaker {
private:
    std::vector<Memento *> mementos;
    Originator *originator;

public:
    Caretaker(Originator* originator) : originator(originator) {
    }

    ~Caretaker() {
        for (auto m : mementos) delete m;
    }

    void Backup() {
        std::cout << "\nCaretaker: Saving Originator's state..." << std::endl;
        this->mementos.push_back(this->originator->Save());
    }
    
    void Undo() {
        if (!this->mementos.size()) {
            return;
        }
        
        Memento *m = this->mementos.back();
        this->mementos.pop_back();
        std::cout << "Caretaker: Restoring state to: " << m->GetName() << std::endl;
        try {
            this->originator->Restore(m);
        } catch (...) {
            this->Undo();
        }
    }

    void ShowHistory() const {
        std::cout << "Caretaker: Here's the list of mementos:" << std::endl;

        for (Memento *m : this->mementos) {
            std::cout << m->GetName() << "\n";
        }
    }
};
