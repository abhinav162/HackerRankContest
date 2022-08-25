#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[10], i, searchEle, count = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cin >> searchEle;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == searchEle)
        {
            count = i + 1;
        }
    }

    if (count > 0)
    {
        cout << count;
    }
    else
    {
        cout << "ELEMENT NOT FOUND";
    }
    return 0;
}
