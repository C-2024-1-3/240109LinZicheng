#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "\0";
    for (int i = 1; i < 6; i++)
    {
        str = str += "*";
        cout << str << endl;
    }
    return 0;
}