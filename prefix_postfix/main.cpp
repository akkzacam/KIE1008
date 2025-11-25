#include <iostream>
#include "counter.hpp"
using namespace std;

int main(void)
{
    Counter c1;

    cout << c1 << endl;
    cout << ++c1 << endl; //1
    cout << c1 << endl; //1
    cout << c1++ << endl; //display c1 then add c1 value by 1
    cout << c1 << endl; //since value of c1 is added before, 2 is the output
    cout << ++++c1 << endl;
    return 0;
}