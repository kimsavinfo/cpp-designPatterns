#ifndef DRINKFACTORY_HPP
#define DRINKFACTORY_HPP

#include <map>
#include <string>

#include "CoffeeFactory.hpp"
#include "TeaFactory.hpp"

class DrinkFactory {
    std::map<std::string, std::unique_ptr<HotDrinkFactory>> hot_drinks_factories;
    
public:
    DrinkFactory() {
        hot_drinks_factories["coffee"] = std::make_unique<CoffeeFactory>();
        hot_drinks_factories["tea"] = std::make_unique<TeaFactory>();
    }
    
    std::unique_ptr<HotDrink> make_drink(const std::string& name) {
        auto drink = hot_drinks_factories[name]->make();
        drink->prepare(25);
        return drink;
    }
};

#endif // DRINKFACTORY_HPP