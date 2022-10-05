#include <iostream>

#include "Creature.hpp"
#include "GroupGraphic.hpp"

int main(int ac, char* av[]) {

    Creature creature;
    creature.set_strength(16);
    creature.set_agility(11);
    creature.set_intelligence(9);
    std::cout << "The creature has an average stat of "
        << creature.average()
        << " and a maximum stat of "
        << creature.max()
        << std::endl;

    
    Group root("root");
    Circle c1, c2;
    root.objects.push_back(&c1);
    Group subgroup("sub");
    subgroup.objects.push_back(&c2);
    root.objects.push_back(&subgroup);
    root.draw();

    return 0;
}