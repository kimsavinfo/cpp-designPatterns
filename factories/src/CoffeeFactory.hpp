#ifndef COFFEEFACTORY_HPP
#define COFFEEFACTORY_HPP

#include "HotDrinkFactory.hpp"
#include "Coffee.hpp"

struct CoffeeFactory : HotDrinkFactory {
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Coffee>();
    }
};

#endif // COFFEEFACTORY_HPP