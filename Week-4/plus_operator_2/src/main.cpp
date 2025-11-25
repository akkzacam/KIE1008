#include <iostream>
#include "../header/box.hpp"
using namespace std;

int main(void)
{
    Box box1;
    Box box2;
    Box box3;

    box1.setParameters(4, 5, 6);
    box2.setParameters(5, 6, 7);

    //may use chaining p3 = p1 + p2
    box3 = box1.operator+(box2);
    cout << box1.getVolume() << "unit^3" << endl;
    cout << box2.getVolume() << "unit^3" << endl;
    cout << box3.getVolume() << "unit^3" << endl;

    return 0;
}