#pragma once
#include <memory>
#include <string>

#include "Employee.hpp"

struct EmployeeFactory {
    static Employee main;
    static Employee aux;

    static std::unique_ptr<Employee> NewEmployee(std::string name, int suite, Employee &proto) {
        auto employee = std::make_unique<Employee>(proto);
        employee->name = name;
        employee->address->suite = suite;
        return employee;
    }

public:
    static std::unique_ptr<Employee> NewMainOfficeEmployee(std::string name, int suite) {
        return NewEmployee(name, suite, main);
    }
    static std::unique_ptr<Employee> NewAuxOfficeEmployee(std::string name, int suite) {
        return NewEmployee(name, suite, aux);
    }
};