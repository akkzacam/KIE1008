#include "base.hpp"
#include <iostream>

int main(void)
{
    //create base-class object
    baseClass b(1);

    derivedClass1 d1(2);
    derivedClass2 d2(3);

    baseClass *bPtr1 = nullptr;
    baseClass *bPtr2 = nullptr;

    derivedClass1 *d1Ptr = nullptr;
    derivedClass2 *d2Ptr = nullptr;

    bPtr1 = &b;
    bPtr1 -> info();

    d1Ptr = &d1;
    d1Ptr -> info();

    d2Ptr = &d2;
    d2Ptr -> info();

    bPtr1 = &d1;
    bPtr2 = &d2;

    bPtr1 -> info();
    bPtr2 -> info();
    //base class is called irrespective of thetype of object
    //pointed at by the pointer.
    //solution? polymorphism

    return 0;
}