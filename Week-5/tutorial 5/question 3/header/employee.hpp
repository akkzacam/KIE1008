#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

class employee
{
    private:
    std::string name, department;
    int age;
    double pay;

    public:
    employee(std::string name_main = "", std::string department_main = "", int age_main = 0, double pay_main = 0);

    void setData(std::string name_main = "", std::string department_main = "", int age_main = 0, double pay_main = 0);

    void setName(std::string name_main);
    std::string getName() const;

    void setDepartment(std::string department_main);
    std::string getDepartment() const;

    void setAge(int age_main);
    int getAge() const;

    void setPay(double pay_main);
    double getPay() const;

    friend std::istream &operator>>(std::istream &, employee &);
    friend std::ostream &operator<<(std::ostream &, const employee &);
};

#endif