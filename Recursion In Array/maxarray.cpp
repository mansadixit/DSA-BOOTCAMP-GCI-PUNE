#include <iostream>
using namespace std;

void maxarr(int a[], int n, int max)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            max = a[i];
        }
    }
    cout << "The largest value in the array is: " << max;
}

int main()
{
    int i, n, max;
    int a[] = {3, 4, 12, 43, 2, 76, 6};
    n = sizeof(a) / sizeof(a[0]);
    max = a[0];
    maxarr(a, n, max);
}