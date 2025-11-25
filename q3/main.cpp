#include <iostream>
using namespace std;

class myClass
{
public:
    //Function to output x.
    void printX() const;

    //Function to output count.
    void printCount();

    //Function to increment count.
    void incrementCount();

    //constructor with default parameters
    //Postcondition set x as a;
    myClass(int a = 0);
private:
    int x;
    int count;
};

//a) Write the definitions of the functions of the class myClass as described in its
//   definition.
myClass::myClass(int a)
{
    x = a;
    count = 0;
}

void myClass::printX() const
{
    cout << "Value of x is: " << x << endl;
}

void myClass::printCount()
{
    cout << "Value of count is: " << count << endl;
}

void myClass::incrementCount()
{
    count++;
}

//b) Write a C++ statement that declares myObject1 to be a myClass object and
//  initializes its member variable x to 5. Then declares myObject2 to be a myClass
//  object and initializes its member variable x to 7.

int main (void)
{
    int x;
    myClass myObject1(x = 5);
    myClass myObject2(x = 7);
    
//  c) Assume that myObject1 and myObject2 are as declared in part (b). What is the
//     output of the following C++ code?
    myObject1.printX();
    cout << endl;

    myObject1.incrementCount();
    myObject1.printCount();
    cout << endl;

    myObject2.printCount();
    cout << endl;

    myObject2.printX();
    cout << endl;

    return 0;
}