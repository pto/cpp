#include <cmath>
#include <iostream>
#include <typeinfo>
using namespace std;

#define DISPLAY(var) cout << #var << ": " << typeid(var).name() << "\n"

int main()
{
    auto b = true;
    DISPLAY(b);

    auto ch = 'x';
    DISPLAY(ch);

    auto i = 123;
    DISPLAY(i);

    auto d = 1.2;
    DISPLAY(d);

    auto z1 = sqrt(1.0F);
    DISPLAY(z1);

    auto z2 = sqrt(1.0);
    DISPLAY(z2);
}
