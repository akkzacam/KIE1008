#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

class lecturer;

lecturer::lecturer(string name_main, string position_main) : name(name_main), position(position_main)
{
    setLecturernName(name_main);
    setLecturerPosition(position_main);
}

void lecturer::setLecturernName(string name_main)
{
    name = name_main;
}

void lecturer::setLecturerPosition(string position_main)
{
    position = position_main;
}

string lecturer::getLecturerName()
{
    return name;
}

string lecturer::getLecturerPosition()
{
    return position;
}

void displayLecturer(lecturer lecturer_main)
{
    cout << "Lecturer: " << lecturer_main.getLecturerName() << " (Position: " << lecturer_main.getLecturerPosition() << ")" << endl;
}