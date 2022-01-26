#include <iostream>

class Base
{
public:
    virtual void vfunc( int x = 10 )
    {
        std::cout << "Base::vfunc=<< " << x << "\n";
    }
};

class Der : public Base
{
public:
    virtual void vfunc( int x = 67 ) override
    {
        std::cout << "Der::vfunc=<< " << x << "\n";
    }
};

int main()
{
    Base* ptr = new Der;
    ptr->vfunc();
}