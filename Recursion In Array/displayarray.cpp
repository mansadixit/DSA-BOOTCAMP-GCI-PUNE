#include <iostream>
using namespace std;

void displayArr(int a[], int n)
{
    static int j;
    if (j == n)
    {
        j = 0;
        cout << endl;
        return;
    }
    cout << a[j] << endl;
    j++;
    displayArr(a, n);
}

int main()
{
    int i, j, n;
    int a[] = {3, 5, 6, 2, 7, 34, 54, 66};
    n = sizeof(a) / sizeof(a[0]);
    displayArr(a, n);
}