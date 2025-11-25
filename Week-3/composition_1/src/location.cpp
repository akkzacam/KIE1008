#include <iostream>
#include <cmath>
#include "../header/composition_1.h"
using namespace std;

Location::Location (Point s, Point d)
{
    Source = s;
    Destination = d;
}

double Location::distance()
{
    int x = Destination.getX() - Source.getX();
    int y = Destination.getY() - Source.getY();

    return sqrt(pow(x, 2) + pow(y, 2));
}