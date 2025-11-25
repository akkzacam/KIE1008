#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "../header/information.hpp"
using namespace std;

int main(void)
{
    srand(time(0));

    course course1("ELECTRONIC CIRCUITS II", "KIE2004");
    lecturer lecterur1("Harikrishnan", "Profesor");
    core core1(course1, lecterur1);

    int num;
    cout << "Enter number of students (max. 10): ";
    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < num; i++)
    {
        string name, id;

        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, name);

        cout << "Enter student " << i + 1 << " ID: ";
        getline(cin, id);

        student student_i(name, id);
        core1.addStudent(student_i);

    }

    core1.displayEverything();
    return 0;
}