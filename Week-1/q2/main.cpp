#include <iostream>
using namespace std;

class yClass
{
public:
    void one();
    yClass(int, int);

private:
    int a;
    int b;
};

yClass::yClass(int ay, int by) //member function is not defined, cannot pass value from main function to class
{
    a = ay;
    b = by;
}

class xClass
{
public:
    void two();
    xClass(int);

private:
    int z;
};


//a
void yClass::one()
{
    cout << a + b << endl;
}

//c
xClass::xClass(int cz) //defined a member function for the xclass
{
    z = cz;
}

void xClass::two()
{
    int a, b; //since int a and b are private variables of the yclass, cannot be accessed, must redeclare
    a = 10;
    b = 15;
    yClass y(a, b); //call a member function of yclass to use yclass's variables
    z = 30;
    cout << a + b + z << endl;
}

// int to transfer from main to class y is not defined in main function
int main (void)
{
    int ay = 1;
    int by = 2;
    int cz = 3;
    yClass y(ay, by); // requires variable ay and by to be passed from function to member function
    xClass x(cz); // requires variable cz to be passed from function to the member function

    y.one();   

    //b is invalid because a, b and z are private members from their respective classes
    //cout << y.a << " " << y.b << " " << x.z << endl;

    x.two();

    
    return 0;
}