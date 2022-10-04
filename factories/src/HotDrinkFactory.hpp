#ifndef HOTDRINKFACTORY_HPP
#define HOTDRINKFACTORY_HPP

#include <memory>

#include "HotDrink.hpp"

struct HotDrinkFactory {
    virtual std::unique_ptr<HotDrink> make() const = 0;
};

#endif // HOTDRINKFACTORY_HPP