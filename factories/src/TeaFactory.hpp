#ifndef TEAFACTORY_HPP
#define TEAFACTORY_HPP

#include "HotDrinkFactory.hpp"
#include "Tea.hpp"

struct TeaFactory : HotDrinkFactory {
    std::unique_ptr<HotDrink> make() const override {
        return std::make_unique<Tea>();
    }
};

#endif // TEAFACTORY_HPP