#include <iostream>
#include <vector>
using namespace std;

constexpr double square(double x)
{
    return x * x;
}

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
    int var = 17;
    constexpr double max1 = 1.4 * square(dmv);
    std::cout << "404.6: " << max1 << "\n";
    // constexpr double max2 = 1.4 * square(var); // error
    const double max3 = 1.4 * square(var);
    std::cout << "404.6: " << max3 << "\n";
    
    vector<double> v {1.2, 3.4, 4.5};
    const double s1 = sum(v);
    std::cout << "9.1: " << s1 << "\n";
    // constexpr double s2 = sum(v); // error
}
