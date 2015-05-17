#include <iostream>
#include <vector>
using namespace std;

constexpr double square(double x)
{
    return x * x;
}

// constexpr double sum(const vector<double>& v) // error: cannot be constexpr
double sum(const vector<double>& v)
{
    double sum = 0.0;
    for (double d : v)
        sum += d;
    return sum;
}

int main()
{
    const int dmv = 17;
    cout << "dmv: " << dmv << "\n";
    int var = 17;
    cout << "var: " << var << "\n";
    constexpr double max1 = 1.4 * square(dmv);
    cout << "max1: " << max1 << "\n";
    // constexpr double max2 = 1.4 * square(var); // error: constexpr of var
    const double max3 = 1.4 * square(var);
    cout << "max3: " << max3 << "\n";
    
    vector<double> v {1.2, 3.4, 4.5};
    const double s1 = sum(v);
    cout << "s1: " << s1 << "\n";
    // constexpr double s2 = sum(v); // error: not constexpr function
}
