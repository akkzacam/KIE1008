#ifndef COMPOSITION_2_H
#define COMPOSITION_2_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
    public:
    Date(int = 1, int = 1, int = 2000);
    void print() const;
    ~Date();

    private:
    int day, month, year;
};

class Employee
{
    public:
    Employee(const string &, const string &, const Date &, const Date &);
    void print() const;
    ~Employee();

    private:
    string first_name, last_name;
    const Date birth_date;
    const Date hire_date;
};

#endif