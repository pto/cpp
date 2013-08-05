#include <iostream>
using namespace std;

int count_x(char *p, char x)
{
	if (p == nullptr) return 0;
	int count = 0;
	for (; *p != 0; ++p)
		if (*p == x)
			++count;
	return count;
}

int main()
{
	cout << "There are 3 x's in excellent extra xrays: "
	   	 << count_x((char *)"excellent extra xrays", 'x') << '\n';
	cout << "There are no x's in a nullptr: " << count_x(nullptr, 'x') << '\n';
}
