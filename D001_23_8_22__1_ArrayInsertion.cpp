// https://www.hackerrank.com/contests/cse205-16915-day1/challenges

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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;

    int arr1[n + 1];
    arr1[n] = x;
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    int size = sizeof(arr1) / sizeof(arr1[0]);
    sort(arr1, arr1 + size);
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}