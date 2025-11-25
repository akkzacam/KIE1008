#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 1000;

class romanType
{
public:
    romanType(string);
    void input();
    void convert();
    void check_error();
    //void calculate();

private:
    bool valid;
    string input_user;
    int converted_input[MAX_SIZE];
    int new_max;
    int sum = 0;
    const int m = 1000;
    const int d = 500;
    const int c = 100;
    const int l = 50;
    const int x = 10;
    const int v = 5;
    const int I = 1;
};

romanType::romanType(string input_roman)
{
    input_user = input_roman;
}

void romanType::input()
{
    cout << "Enter roman numerals: ";
    cin >> input_user;
    cout << "Legnth of input is: " << input_user.length() << endl;
    new_max = input_user.length();
}

void romanType::convert()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (input_user[i] == 'm' || input_user[i] == 'M')
        {
            converted_input[i] = m;
        }
        else if (input_user[i] == 'd' || input_user[i] == 'D')
        {
            converted_input[i] = d;
        }
        else if (input_user[i] == 'c' || input_user[i] == 'C')
        {
            converted_input[i] = c;
        }
        else if (input_user[i] == 'l' || input_user[i] == 'L')
        {
            converted_input[i] = l;
        }
        else if (input_user[i] == 'x' || input_user[i] == 'X')
        {
            converted_input[i] = x;
        }
        else if (input_user[i] == 'v' || input_user[i] == 'V')
        {
            converted_input[i] = v;
        }
        else if (input_user[i] == 'i' || input_user[i] == 'I')
        {
            converted_input[i] = I;
        }
        else if (input_user[i] == '\0')
        {
            break;
        }
    }

    for (int i = 0; i < new_max; i++)
    {
        cout << converted_input[i] << endl;
    }
}


void romanType::check_error()
{
   for (int i = 0; i < new_max; i++)
   {
        if (converted_input[i] < converted_input[i + 1])
        {
            sum = sum + converted_input[i] - converted_input[i + 1];
        }
        else
        {
            sum += converted_input[i];
        }
   } 
   cout << sum;
}


int main (void)
{
    string input_roman;
    romanType romanNumeral(input_roman);
    romanNumeral.input();
    romanNumeral.convert();
    romanNumeral.check_error();
    return 0;
}