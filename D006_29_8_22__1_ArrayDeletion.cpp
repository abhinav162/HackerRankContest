// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int *a;
//     int n;
//     cin >> n;
//     a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int pos, s;
//     cin >> s;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == s)
//         {
//             pos = i;
//         }
//     }

//     int i = 0;
//     while (i < n)
//     {
//         if (i == pos)
//         {
//             i++;
//         }
//         else
//         {
//             cout << a[i] << " ";
//             i++;
//         }
//     }

//     return 0;
// }

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
    bool flag = false;
    int del_ele;
    cin >> del_ele;

    for (int i = 0; i < n; i++)
    {
        if (del_ele == arr[i])
        {
            flag = true;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    if (flag == false)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
            cout << arr[i] << " ";
    }

    return 0;
}