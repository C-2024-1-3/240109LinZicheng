#include <iostream>
using namespace std;
int main()
{
	bool a[101];
	for (int i = 1; i <= 100; ++i)
		for (int j = 1; i * j <= 100; ++j)
			a[i * j] = !a[i * j];
	for (int i = 1; i <= 100; ++i)
		if (a[i]) cout << i << " ";
	return 0;
}