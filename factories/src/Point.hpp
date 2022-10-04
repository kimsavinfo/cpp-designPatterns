struct Point {
    float x;
    float y;
    friend class PointFactory;

private:
    Point(float x, float y) : x(x), y(y){ }
};