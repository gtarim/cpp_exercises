#include <iostream>

struct Base
{
    static const int sx = 12;
    static constexpr int sy = 12;
    static double sd2 = 1.2;
    static constexpr double sd = 1.2;
};

int main()
{
    std::cout << Base::sd2 << "\n";
    std::cout << Base::sd << "\n";
}