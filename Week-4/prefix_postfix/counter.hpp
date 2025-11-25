#ifndef PREFIX_POSTFIX_HPP
#define PREFIX_POSTFIX_HPP

#include <iostream>
using namespace std;

class Counter
{
    private:
    int count;

    public:
    Counter(int count = 0);
    Counter &operator++(); // ++prefix
    const Counter operator++(int dummy); // postfix++

    friend ostream &operator<<(ostream &out, const Counter &);
};

#endif