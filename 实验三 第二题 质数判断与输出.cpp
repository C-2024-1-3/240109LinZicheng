#include <iostream>
#include <Cmath>
using namespace std;
bool is_prime(int num)
{
    bool temp = true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i != 0)
            temp *= true;
        else
            temp *= false;
    }
    if (temp == true)
        return true;
    else
        return false;
}
int main()
{
    int count_prime = 0;
    for (int num = 2; num < 200; ++num)
    {
        bool prime =  is_prime(num);
        if (prime == true)
        {
            cout << num << "\t";
            count_prime++;
        }
        if (count_prime % 10 == 0)
            cout << endl;
    }
    return 0;
}