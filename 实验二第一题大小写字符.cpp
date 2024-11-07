#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ('\x60' < ch < '\x7B')
        cout << static_cast <char> (ch - 32) << endl;
    else
        cout << ch + 1 << endl;
    return 0;
}