#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int* f()
{
    int k = 1;
    int* list = new int[4];
    for (int i = 0; i < 4; i++)
    {
        list[i] = k;
        ++k;
    }
    return list;
}
void main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
}