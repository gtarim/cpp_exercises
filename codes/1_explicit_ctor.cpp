#include <iostream>

class Base
{
public:
    Base() { std::cout << "ctor\n"; }
    explicit Base( int i ) { std::cout << "int ctor\n"; }
    Base( double i ) { std::cout << "double ctor\n"; }
    
    ~Base() { std::cout << "ctor\n"; }
};

int main()
{
    Base base = 30;

    Base base;
    base = 10.1;
}