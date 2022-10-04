#ifndef TEA_HPP
#define TEA_HPP

#include <iostream>

#include "HotDrink.hpp"

struct Tea : HotDrink {
    void prepare(int volume) override  {
        std::cout << "Preparing " << volume << " ml of tea..." << std::endl;
    }
};

#endif // TEA_HPP