#include <iostream>
using namespace std;
void bubble_sort(double arr[10])
{
    for (int i = 1; i <= 10; i++)
        for (int j = 0; j < 9; j++)
            if (arr[j] > arr[j + 1])
            {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
}
int main()
{
    double array[10];
    cout << "Before bubble sort: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> array[i];
    bubble_sort(&array[10]);
    cout << "After bubble sort: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << "\t";
    return 0;
}