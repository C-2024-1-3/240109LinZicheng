﻿#include <iostream>
using namespace std;
int main()
{
    int peaches = 1;
    for (int i = 1; i <= 9; i++)
    {
        peaches = (peaches + 1) * 2;
    }
    cout << peaches;
    return 0;
}