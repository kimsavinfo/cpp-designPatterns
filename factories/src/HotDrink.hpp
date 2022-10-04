#ifndef HOTDRINK_HPP
#define HOTDRINK_HPP

struct HotDrink {
    virtual void prepare(int volume) = 0;

    virtual ~HotDrink() = default;
};

#endif // HOTDRINK_HPP