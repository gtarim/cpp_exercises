#include <iostream>

class Base
{
public:
    virtual void vfunc() { std::cout << "Base::vfunc()\n"; }
};

class Der : public Base
{
private:
    void vfunc() override { std::cout << "Der::vfunc()\n"; }
};

void func( Base& base )
{
    base.vfunc();
}

int main()
{
    Der myder;
    func( myder );
}