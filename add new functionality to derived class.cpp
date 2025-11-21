#include <iostream>

// Base class definition
class Base
{
protected:
    int value;//protected member
public:
    Base(int arg) : value(arg) {}// Parameterized constructor to set the value of protected data

    void identify() const // Const function
    {
        std::cout << "I am a Base\n";
    }
};

// Derived class definition
class Derived : public Base
{
public:
    Derived(int arg) : Base(arg) {}// Constructor declaration using member initializer list

    void newFunction() const// New function added to the derived class
    {
        std::cout << "I am a new function in Derived\n";
    }

    int getValue() const
    {
        return value;
    }
};

// Main function
int main()
{
    Derived derived{ 5 }; // Call the derived constructor
    std::cout << "derived has value " << derived.getValue() << '\n';

    //it will not work objects of type Base have no access to the getValue() function in Derived Class
    //Base base { 5 };
    //std::cout << "base has value " << base.getValue() << '\n'; 

    derived.newFunction(); // Call the new function in the derived class

    return 0;
}
