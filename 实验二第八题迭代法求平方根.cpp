#include <iostream>
#include <Cmath>
using namespace std;
int main()
{
    float a;
    cin >> a;
    double x;
    do
    {
        x = (1.0 / 2.0) * (a + a / a);
        a = x;
    } while (x - a < pow(10, -5));
    cout << "sqrt(a) = " << x << endl;
    return 0;
}