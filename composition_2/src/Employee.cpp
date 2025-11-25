#include <iostream>
#include "../header/composition_2.h"
using namespace std;
/*
Employee::Employee(const string &first, const string &last, const Date &dob, const Date &doh)
{
    first_name = first;
    last_name = last;
    birth_date = dob;
    hire_date = doh;
}
*/

void Employee::print() const
{
    cout << last_name << ", " << first_name << " Hired: ";
    hire_date.print();
    cout << " Birthday: ";
    birth_date.print();
    cout << endl;
}