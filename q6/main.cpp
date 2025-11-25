#include <iostream>
#include <cmath>
using namespace std;

class lineType
{
public:
    lineType();
    void setValues();
    void slope();
    void equal();
    void parallel();
    void perpendicular();

private:
    float a1, b1, c1, a2, b2, c2;
    float slope1, slope2;
    bool vertical_1, vertical_2;
    float ka, kb, kc;
};

lineType::lineType()
{
    a1 = 0;
    b1 = 0;
    c1 = 0;
    a2 = 0;
    b2 = 0;
    c2 = 0;
    slope1 = 0;
    slope2 = 0;
    vertical_1 = false;
    vertical_2 = false;
    ka = 0.0;
    kb = 0.0;
    kc = 0.0;
}

void lineType::setValues()
{
    cout << "Enter value for a1: ";
    cin >> a1;
    cout << "Enter value for b1: ";
    cin >> b1;
    cout << "Enter value for c1: ";
    cin >> c1;
    cout << "Enter value for a2: ";
    cin >> a2;
    cout << "Enter value for b2: ";
    cin >> b2;
    cout << "Enter value for c2: ";
    cin >> c2;

    cout << "\nLine 1 is: " << a1 <<"x + " << b1 << "y = " << c1 << endl;
    cout << "Line 2 is: " << a2 <<"x + " << b2 << "y = " << c2 << endl;

}

void lineType::slope()
{
    //line 1
    if (a1 == 0)
    {
        slope1 = 0;
        cout << "\nSlope of Line 1 is 0. Line 1 is a horizontal line." << endl;
    }
    else if (b1 == 0)
    {
        vertical_1 = true;
        cout << "\nSlope of Line 1 is undefined. Line 1 is a vertical line." << endl;
    }
    else if ((a1 != 0) && (b1 != 0))
    {
        slope1 = -(a1 / b1);
        cout << "\nSlope of Line 1 is " << slope1 << endl;
    }

    //line 2
    if (a2 == 0)
    {
        slope2 = 0;
        cout << "Slope of Line 2 is 0. Line 2 is a horizontal line." << endl;
    }
    else if (b2 == 0)
    {
        vertical_2 = true;
        cout << "Slope of Line 2 is undefined. Line 2 is a vertical line." << endl;
    }
    else if ((a2 != 0) && (b2 != 0))
    {
        slope2 = -(a2 / b2);
        cout << "Slope of Line 2 is " << slope2 << endl;
    }
}
//
void lineType::equal()
{
    if (a2 == 0)
    {
        ka = NAN;
    }
    else
    {
        ka = a1 / a2;
    }

    if (b2 == 0)
    {
        kb = NAN;
    }
    else
    {
        kb = b1 / b2;
    }

    if (c2 == 0)
    {
        kc = NAN;
    }
    else
    {
        kc = c1 / c2;
    }

    if ((a2 == 0 || b2 == 0 || ka == kb) && (a2 == 0 || c2 == 0 || ka == kc) && (b2 == 0 || c2 == 0 || kb == kc))
        cout << "\nLines 1 and 2 are equal" << endl;
    else
        cout << "\nLines 1 and 2 are not equal" << endl;

}

void lineType::parallel()
{
    if (slope1 == slope2)
    {
        cout << "\nLines 1 and 2 are parallel" << endl;
    }
    else
    {
        cout << "\nLines 1 and 2 are not parallel" << endl;
    }
}

void lineType::perpendicular()
{
    if (vertical_2 && vertical_1)
    {
        cout << "\nLines 1 and 2 are not perpendicular to each other." << endl;
        return;
    }

    if ((slope1 == 0) && (vertical_2) || (slope2 == 0) && (vertical_1))
    {
        cout << "\nLines 1 and 2 are perpendicular to each other." << endl;
    }
    else if ((slope1 * slope2) == -1)
    {
        cout << "\nLines 1 and 2 are perpendicular to each other." << endl;
    }
    else
    {
        cout << "\nLines 1 and 2 are not perpendicular to each other." << endl;
    }
}

int main (void)
{
    lineType line1;
    line1.setValues();
    line1.slope();
    line1.equal();
    line1.parallel();
    line1.perpendicular();
    return 0;
}