#include <iostream>
#include "../header/movable_point.hpp"

class Point;

MovablePoint::MovablePoint(int x_main, int y_main, int x_speed_main, int y_speed_main)
: Point(x_main, y_main), x_speed(x_speed_main), y_speed(y_speed_main) {}

void MovablePoint::print() const
{
    std::cout << "Movable Point = ";
    Point::print(); // to invoke base class function via scope resolution operator

    std::cout << "Speed = " << "(" << x_speed << ", " << y_speed << ")" << std::endl;
}

void MovablePoint::move()
{
    //since subclass cannot access private data members of the base class directly,
    //therefore need to go through the public interface to access private data members of the base class;
    Point::setX(Point::getX() + x_speed);
    Point::setY(Point::getY() + y_speed);

    //to use x and y directly, use protected data member
    /*
    class Point
    {
        protected:
        int x, y;
        .....
    };

    class MovablePoint : public Point
    {.......
    }

    void MovablePoint::move()
    {
        x += x_speed;
        y += y_speed;
    }
    
    */
}