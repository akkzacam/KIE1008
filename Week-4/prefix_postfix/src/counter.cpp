#include <iostream>
#include "../header/counter.hpp"
using namespace std;

class Counter;

Counter::Counter(int count_main) : count(count_main) {}

//prefix, returns the reference of *this
Counter & Counter::operator++()
{
    ++count;
    return *this;
}

// postfix, returns the old value byvalue
const Counter Counter::operator++(int dummy)
{
    Counter old_value(*this);
    ++count;
    return old_value;
}

ostream &operator<<(ostream &out, const Counter &counter_main)
{
    out << counter_main.count;
    return out;
}