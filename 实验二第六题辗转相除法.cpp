#include <iostream>
using namespace std;
int Gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int gcd = Gcd(num1, num2);
    int lcm = num1 * num2 / gcd;
    cout << "Greatest common divisor: " << gcd << endl;
    cout << "Least common multiple: " << lcm << endl;
    return 0;
}