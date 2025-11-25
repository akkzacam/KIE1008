#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class baseClass
{
    protected:
    int x;

    public:
    baseClass(int val): x(val){}
    void info()
    {
        std::cout << "Info member function of base class" << std::endl;
    }
};

class derivedClass1: public baseClass
{
    public:
    derivedClass1(int val): baseClass(val){}
    void info()
    {
        std::cout << "Info member function of derived class 1" << std::endl;
    }
};

class derivedClass2: public baseClass
{
    public:
    derivedClass2(int val): baseClass(val){}
    void info()
    {
        std::cout << "Info member function of derived class 2" << std::endl;
    }
};

#endif