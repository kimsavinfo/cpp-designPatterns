#ifndef COFEE_HPP
#define COFEE_HPP

#include <iostream>

#include "HotDrink.hpp"

struct Coffee : HotDrink {
    void prepare(int volume) override  {
        std::cout << "Preparing " << volume << " ml of coffee..." << std::endl;
    }
};

#endif // COFFEE_HPP