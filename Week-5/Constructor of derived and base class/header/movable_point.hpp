#include "point.hpp"

class MovablePoint : public Point
{
    private:
    int x_speed, y_speed;

    public:
    MovablePoint(int x, int y, int x_speed, int y_speed);
    void move();
    void print() const; //member function overrieding in inheritance
};