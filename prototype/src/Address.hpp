#pragma once
#include <iostream>
#include <string>

struct Address {
    std::string street;
    std::string city;
    int suite;

    Address(const std::string& street, const std::string& city, const int suite)
        : street{street},
        city{city},
        suite{suite} {
    }

    friend std::ostream& operator<<(std::ostream& os, const Address& address) {
        return os
            << "street: " << address.street
            << " city: " << address.city
            << " suite: " << address.suite;
    }
};
