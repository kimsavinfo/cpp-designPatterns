#include <iostream>
#include "EmployeeFactory.hpp"

Employee EmployeeFactory::main{"", new Address{"Baker Street", "London", 221}};
Employee EmployeeFactory::aux{"", new Address{"Downing Street", "London", 10}};

int main() {
    std::cout << "Prototype" << std::endl;

    auto john = EmployeeFactory::NewAuxOfficeEmployee("John Doe", 123);
    auto jane = EmployeeFactory::NewMainOfficeEmployee("Jane Doe", 125);

    std::cout << *jane << std::endl << *john << std::endl;
    
    return 0;
}