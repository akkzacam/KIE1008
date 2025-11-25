#include <iostream>
#include "../header/employee.h"
using namespace std;

int main(void)
{
    Employee e1;
    cout << e1.getCount() << endl;

    setX(e1, 10);
    cout << e1.getCount() << endl;

    return 0;
}