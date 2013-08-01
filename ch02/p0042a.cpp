#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    auto b = true;
    cout << "bool: " << typeid(b).name() << "\n";

    auto ch = 'x';
    cout << "char: " << typeid(ch).name() << "\n";
}
