#include <iostream>
using namespace std;
int main()
{
    float x, y;
    y = 0;
    cout << "Please input an x,input 0 to exit:" << endl;
    cin >> x;
    if (x > 0.0 && x < 1.0)
    {
        y = 3 - (2 * x);
        cout << y << endl;
    }
    else if (x >= 1.0 && x < 5.0)
    {
        y = 1.0 / (2.0 * x) + 1;
        cout << y << endl;
    }
    else if (x >= 5.0 && x < 10.0)
    {
        y = x * x;
        cout << y << endl;
    }
    else
        exit(0);
    return 0;
}