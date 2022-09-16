#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;
    char a[n];
    if (n > 0 && n <= 20)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                count++;
            }
        }

        if (count > 0)
        {
            cout << count;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        cout << "Invalid array size";
    }

    return 0;
}