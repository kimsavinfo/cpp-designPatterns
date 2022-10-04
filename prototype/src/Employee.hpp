#pragma once
#include <iostream>
#include <string>

#include "Address.hpp"

struct Employee {
    std::string name;
    Address* address;

    Employee(std::string n, Address *a) : name(n), address(a) {}
    friend class EmployeeFactory;

public:
    Employee(const Employee &inputEmployee) : name{inputEmployee.name}, address{new Address{*inputEmployee.address}} { }

    Employee& operator=(const Employee &inputEmployee) {
        if (this == &inputEmployee) return *this;
        name = inputEmployee.name;
        address = new Address{*inputEmployee.address};
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Employee &o) {
        return os << o.name << " works at " 
        << o.address->street << " " << o.address->city << " seats @" << o.address->suite;
    }
};