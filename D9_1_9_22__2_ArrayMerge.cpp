#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1;
    vector<int> a3;
    if (size1 > 0 && size1 <= 20)
    {
        int a1[size1];
        for (int i = 0; i < size1; i++)
        {
            cin >> a1[i];
            if (i == 0)
            {
                a3.push_back(a1[i]);
            }
            else if (a1[i] > a1[i - 1])
            {
                a3.push_back(a1[i]);
            }
            else
            {
                cout << "Incorrect Array Elements";
                return 0;
            }
        }
    }
    else
    {
        cout << "Invalid Array";
        return 0;
    }
    cin >> size2;
    if ((size2 == size1) || !(size2 > 0 && size2 <= 20))
    {
        cout << "Invalid Array";
        return 0;
    }
    else
    {
        int a2[size2];
        for (int i = 0; i < size2; i++)
        {
            cin >> a2[i];
            if (i == 0)
            {
                a3.push_back(a2[i]);
            }
            else if (a2[i] > a2[i - 1])
            {
                a3.push_back(a2[i]);
            }
            else
            {
                cout << "Incorrect Array Elements";
                return 0;
            }
        }
    }

    sort(a3.begin(), a3.end());
    for (int i = 0; i < a3.size(); i++)
    {
        cout << a3[i] << "\n";
    }
}