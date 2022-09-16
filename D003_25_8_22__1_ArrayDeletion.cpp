#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    // cout<<"Enter Number of elements : ";
    cin >> n;
    int a[n];
    // cout<<"Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pos;
    // cout<<"From which position you wants to delete : ";
    cin >> pos;
    for (int j = (pos); j < n; j++)
    {
        a[j] = a[j + 1];
    }
    n--;
    // cout<<"Array Elements after deletion : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}