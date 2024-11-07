#include <iostream>
using namespace std;
int main()
{
    cout << "Choose an operator in the calculator: " << endl;
    cout << "1  add  +" << endl;
    cout << "2  minus  -" << endl;
    cout << "3  multi  *" << endl;
    cout << "4  quo-div  /" << endl;
    cout << "5  rem-div  %" << endl;
    int i;
    cin >> i;
    int m, n, result;
    cin >> m >> n;
    switch (i)
    {
        case 1:
        {
            result = m + n;
            cout << result;
            break;
        }
        case 2:
        {
            result = m - n;
            cout << result;
            break;
        }
        case 3:
        {
            result = m * n;
            cout << result;
            break;
        }
        case 4:
        {
            if (n == 0)
            {
                cerr << "Divisor cannot be 0!" << endl;
                return 1;
            }
            else
            {
                result = m / n;
                cout << result;
                break;
            }
        }
        case 5:
        {
            if (n == 0)
            {
                cerr << "Divisor cannot be 0!" << endl;
                return 1;
            }
            else
            {
                result = m % n;
                cout << result;
                break;
            }
        }
    }
    return 0;
}