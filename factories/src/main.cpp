#include <iostream>
#include <string>

#include "PointFactory.hpp"

int main() {
    std::cout << "Factories" << std::endl;

    auto cartesianPoint = PointFactory::NewCartesian(3, 4);
    auto polarPoint = PointFactory::NewPolar(4, 1.5);

    std::cout << "Cartesian: (" << cartesianPoint.x << ";" << cartesianPoint.y << ")" << std::endl;
    std::cout << "Polar: (" << polarPoint.x << ";" << polarPoint.y << ")" << std::endl;

    return 0;
}