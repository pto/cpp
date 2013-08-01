#include <iostream>
#include <complex>
#include <vector>
using namespace std;

int main()
{
    double d1 = 2.3;
    double d2 {2.3};
    cout << "2.3: " << d1 << "\n";
    cout << "2.3: " << d2 << "\n";

    complex<double> z = 1;
    cout << "1+0i: " << z << "\n";

    complex<double> z2 {d1, d2};
    cout << "2.3+2.3i: " << z2 << "\n";

    complex<double> z3 = {1, 2};
    cout << "1+2i: " << z3 << "\n";

    vector<int> v {1, 2, 3, 4, 5, 6};
    cout << "v: ";
    for (int i : v) cout << i << " ";
    cout << "\n";

    int i1 = 7.2;
    cout << "7: " << i1 << "\n";

    int i2 {7.2};
    int i3 = {7.2};
    cout << "warned: 7: " << i2 << "\n";
    cout << "warned: 7: " << i3 << "\n";
}
