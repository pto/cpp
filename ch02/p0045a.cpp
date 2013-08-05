#include <iostream>
using namespace std;

void print_array(int a[10])
{
	for (auto i = 0; i < 10; ++i)
		cout << a[i] << " ";;
	cout << "\n";
}

void copy_fct()
{
	int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int v2[10];

	print_array(v1);
	for (auto i = 0; i != 10; ++i)
		v2[i] = v1[i];
	print_array(v2);
}

int main()
{
	copy_fct();
}
