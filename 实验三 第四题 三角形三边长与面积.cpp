#include <iostream>
#include <Cmath>
#include "mytriangle.h"
using namespace std;
int main()
{
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    bool valid = is_valid(side1, side2, side3);
    if (valid == false)
    {
        cerr << "Invalid input!" << endl;
        return 1;
    }
    long double S = area(side1, side2, side3);
    cout << "Its area is: " << S << endl;
    return 0;
}