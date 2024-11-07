#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float Falrenheit, Celcius;
    cin >> Falrenheit;
    Celcius = (Falrenheit - 32) / 1.8;
    setprecision(3);
    cout << Celcius;
    return 0;
}