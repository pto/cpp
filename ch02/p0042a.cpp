#include <cmath>
#include <iostream>
#include <typeinfo>
using namespace std;

#define DISPLAY(type, var) cout << #type << ": " << typeid(var).name() << "\n"

int main()
{
    auto b = true;
    DISPLAY(bool, b);

    auto ch = 'x';
    DISPLAY(char, ch);

    auto i = 123;
    DISPLAY(int, i);

    auto d = 1.2;
    DISPLAY(double, d);

    auto z = sqrt(1.0F);
    DISPLAY(float, z);
}
