#ifndef DISCOVER_H
#define DISCOVER_H

#include <iostream>
using namespace std;

class discover // removed (). paranthesis to state variables used in class not requried
{
    public:
    void set (string, int, double); // added void as the member is a function of a class
    void print() const;
    discover(); // removed const after constructor; constructors cannot be const
    discover(string, int, double);
    // removed duplicate declaration

    private:
    string type;
    int l;
    double w;
}; // added semicolon

#endif