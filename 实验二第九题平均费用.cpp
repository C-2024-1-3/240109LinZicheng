#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    do
    {
        n += n * 2;
    } while (n <= 100);
    float aver_price;
    aver_price = 0.8 * n / 5.0;
    cout << aver_price;
    return 0;
}