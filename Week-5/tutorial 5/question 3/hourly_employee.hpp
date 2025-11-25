#ifndef HOURLY_EMPLOYEE_HPP
#define HOURLY_EMPLOYEE_HPP

#include "employee.hpp"
#include <string>

class hourlyEmployee: public employee //no need for class
{
    public: //single : not double ::
    void setData(std::string name_main = "", std::string department_main = "", int age_main = 0, double pay_main = 0, double hrsWk = 0, double payRate = 0); // no need to explicitly mention 0.0 since already double type

    void setHoursWorked(double hrsWrk); //removed const, no need to setvalue
    double getHoursWorked() const;

    void setHourlyPayRate(double payRate);
    double getHourlyPayRate() const;

    void setPay();//removed cosnt

    hourlyEmployee(std::string name_main = "", std::string department_main = "", int age_main = 0, double pay_main = 0, double hrsWk = 0, double payRate = 0);


    friend std::istream &operator>>(std::istream &, hourlyEmployee &);
    friend std::ostream &operator<<(std::ostream &, const hourlyEmployee &);

    private:
    double hoursWorked;
    double hourlyPayRate;
};

#endif