#include <iostream>
#include <string>

//base class you
class Vehicle
{
    public:
    std::string brand = "VOLVO";
    void honk()
    {
        std::cout << "meow meow" << std::endl;
    }
};

//derived class everyone else
class Car : public Vehicle
{
    public:
    std::string model = "FH6";
};

int main(void)
{
    Car myCar;
    myCar.honk(); //accesing the base class's member fn
    std::cout << myCar.brand << " " << myCar.model << std::endl; //accessing base class's public data
    return 0;
}

//REMEMBER COMMUNISM