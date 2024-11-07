#include <iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float height, radius, volume;
    cin >> height >> radius;
    volume = (1.0 / 3.0) * pi * radius * radius * height;
    cout << volume;
    return 0;
}