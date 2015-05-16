#include <iostream>

void some_function()
{
    double d = 2.2;
    int i = 7;
    d = d + i;
    std::cout << "d: " << d << "\n";
    i = d * i;
    std::cout << "i: " << i << "\n";
}

int main()
{
    some_function();
}
