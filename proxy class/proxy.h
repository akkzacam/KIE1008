#ifndef PROXY_H
#define PROXY_H

#include <iostream>
using namespace std;

class Implementation
{
    public:
    Implementation(int v) : value(v) {}
    void setValue(int v)
    {
        value = v;
    }
    int getValue() const
    {
        return value;
    }

    private:
    int value;
};

#endif