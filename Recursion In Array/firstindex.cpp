#include <iostream>
using namespace std;

void find(int a[], int n)
{
    int i, num;
    cout << "Enter the number to be found: " << endl;
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            cout << "Number found at index: " << i << endl;
        }
        else
            cout << "-1";
    }
}

int main()
{
    int i, n, max;
    int a[] = {3, 4, 12, 43, 2, 76, 6};
    n = sizeof(a) / sizeof(a[0]);
    find(a, n);
}