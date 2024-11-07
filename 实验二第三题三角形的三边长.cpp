#include <iostream>
using namespace std;
int main()
{
    int a, b, c, p;
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || a + c <= b)
    {
        cout << "They cannot form a triangle." << endl;
        exit(0);
    }
    else
    {
        p = a + b + c;
        cout << "They can form a triangle, and its perimeter is: " << p << endl;
        if (a == b || b == c || c == a)
            cout << "It is an isosceles triangle." << endl;
        else
            cout << "It is not an isosceles triangle." << endl;
    }
    return 0;
}