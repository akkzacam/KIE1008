#include <iostream>
#include <string>
#include "../header/information.hpp"
using namespace std;

int main(void)
{
    cout << "Undergrad Student" << endl << endl;
    undergrad student_u1("Aydan", "Male", 20);
    student_u1.display();

    cout << endl << "Postgrad Student" << endl << endl;
    postgrad student_p1("dumfook", "They/them", 21);
    student_p1.display();

    cout << endl << "Modifying ages" << endl << endl;
    modifyAge(student_u1, 22);
    modifyAge(student_p1, 255);

    cout << "Undergrad Student" << endl << endl;
    student_u1.display();
    cout << endl << "Postgrad Student" << endl << endl;
    student_p1.display();

    return 0;
}