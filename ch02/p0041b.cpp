#include <iostream>
#include <complex>
#include <vector>
using namespace std;

int main()
{
    double d1 = 2.3;
    double d2 {2.3};
    cout << "d1: " << d1 << "\n";
    cout << "d2: " << d2 << "\n";

    complex<double> z = 1;
    cout << "z: " << z << "\n";

    complex<double> z2 {d1, d2};
    cout << "z2: " << z2 << "\n";

    complex<double> z3 = {1, 2};
    cout << "z3: " << z3 << "\n";

    vector<int> v {1, 2, 3, 4, 5, 6};
    cout << "v: ";
    for (int i : v)
	cout << i << " ";
    cout << "\n";

    int i1 = 7.2;
    cout << "i1: " << i1 << "\n";

    int i2 {7.2};
    int i3 = {7.2};
}
