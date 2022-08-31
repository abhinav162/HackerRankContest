// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     float a[5],tcost = 0;
//     for(int i = 0;i < 5;i++)
//     {
//         cin>>a[i];
//         if(a[i] > 100)
//         {
//             tcost = tcost + (a[i] - (a[i]*0.2));
//         }
//         else
//         {
//             tcost = tcost + a[i];
//         }
//     }

//     cout<<fixed<<setprecision(2)<<tcost;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a[5], tcost = 0.0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 100)
        {
            a[i] = (a[i] * 80) / 100;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        tcost = tcost + a[i];
    }
    int temp = int(tcost * 100);
    if (temp % 100 == 0)
        cout << tcost << endl;
    else
        cout << fixed << setprecision(2) << tcost;
    return 0;
}