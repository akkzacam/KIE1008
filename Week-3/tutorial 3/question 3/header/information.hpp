#ifndef INFORMATION_HPP
#define INFORMATION_HPP

#include <iostream>
#include <string>
using namespace std;

//proxy main class to handle implementations
class student
{
    friend void setAge(student &, int);

    public:
    student(string, string, int);
    
    string getName();
    string getGender();
    int getAge();

    void display();

    private:
    string name, gender;
    int age;
};

// files to call function from implementation class
class undergrad
{
    friend void modifyAge(undergrad &, int);

    public:
    undergrad(string, string, int);

    string getName();
    string getGender();
    int getAge();

    void display();

    private:
    student *ptr_u1;
};

class postgrad
{
    friend void modifyAge(postgrad &, int);

    public:
    postgrad(string, string, int);

    string getName();
    string getGender();
    int getAge();

    void display();

    private:
    student *ptr_p1;
};


#endif