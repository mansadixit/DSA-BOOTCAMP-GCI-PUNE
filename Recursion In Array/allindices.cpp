#include <iostream>
using namespace std;

void find(int a[], int n)
{
    int i, num;
    int flag = 0;
    cout << "Enter the number to be found: " << endl;
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            cout << "Number found at index: " << i << endl;
            flag++;
        }
        else
            cout << "-1";
    }
    if (flag > 0)
    {
        cout << "The number is found " << flag << " times." << endl;
    }
    else
        cout << "The number not found";
}

int main()
{
    int i, n, max;
    int a[] = {3, 4, 12, 43, 2, 76, 6};
    n = sizeof(a) / sizeof(a[0]);
    find(a, n);
}