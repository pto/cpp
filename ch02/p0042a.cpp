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

    auto z1 = sqrt(1.0F);
    DISPLAY(float, z1);

    auto z2 = sqrt(1.0);
    DISPLAY(double, z2);

	auto x {123};
	DISPLAY(no=, x);
}
