#include <cmath>

#include "./Point.hpp"

struct PointFactory {
    static Point NewCartesian(float x, float y) {
        return Point{ x, y };
    }

    static Point NewPolar(float magnitude, float angle) {
        return Point{ magnitude * cos(angle), magnitude * sin(angle) };
    }
};