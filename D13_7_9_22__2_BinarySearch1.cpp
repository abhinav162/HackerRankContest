#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int s, int e, int f)
{
    if (e >= s)
    {
        int m;

        m = s + (e - s) / 2;

        if (a[m] == f)
            return m;
        else if (a[m]<f)
            return binarySearch(a, m + 1, e, f);
        else
            return binarySearch(a, s, m - 1, f);
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    if (n > 1000000)
    {
        return 0;
    }
    vector<int> a;
    while (n--)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int skey;
    cin >> skey;
    int first = 0, last = a.size() - 1;
    int res = binarySearch(a, first, last, skey);
    cout << res;
    return 0;
}