#include <iostream>

void some_function()
{
    double d = 2.2;
    int i = 7;
    d = d + i;
    std::cout << "9.2: " << d << "\n";
    i = d * i;
    std::cout << "64: " << i << "\n";
}

int main()
{
    some_function();
}
