#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void insertLower(char *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 65 && a[i] <=90)
        {
            int pos = i + 1;
            for (int j = n; j >= (pos - 1); j--)
            {
                a[j + 1] = a[j];
            }
            a[pos] = a[i] + 32;
            n++;
        }
    }
    for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
}

int main()
{
    int n;
    cin >> n;
    char *a;
    a = new char[n];
    if (n > 0 && n <= 20)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        insertLower(a, n);
    }
    else
    {
        cout << "Invalid size of array";
    }
    return 0;
}
