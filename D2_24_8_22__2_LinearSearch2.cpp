//https://www.hackerrank.com/contests/cse205-16915-day2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int *a, n;
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int highest = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= highest)
        {
            highest = a[i];
            index = i;
        }
    }
    cout << index;
    return 0;
}