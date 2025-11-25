#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
using namespace std;

class point
{
    private:
    int x, y;

    public:
    point(int x = 0, int y = 0);
    void print() const;

    //use nonmember friend function for operator overloading
    friend ostream &operator<<(ostream &, const point &);
    friend istream &operator>>(istream &, point &); //no const for input. will expect error if do so
};

#endif