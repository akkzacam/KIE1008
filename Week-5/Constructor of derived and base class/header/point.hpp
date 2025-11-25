#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private:
    int x, y;

    public:
    Point(int x = 0, int y = 0);//default constructor
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void print() const;
};

#endif