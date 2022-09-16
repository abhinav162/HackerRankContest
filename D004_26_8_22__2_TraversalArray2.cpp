#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int largestBall()
{
    int a[6], largest = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    return largest;
}

int main()
{
    int n;
    cin >> n;
    int p[n];
    if (n > 0 && n < 5)
    {
        for (int i = 0; i < n; i++)
        {
            p[i] = largestBall();
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << "\n";
        }
    }

    return 0;
}