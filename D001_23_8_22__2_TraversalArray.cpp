#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i != 0; i--)
    {
        int a[7], sum = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        (sum == 56 ? cout << "1\n" : cout << "0\n");
    }
    return 0;
}
