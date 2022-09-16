#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char *a;
    a = new char[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pos;
    cin >> pos;
    if (pos > 0)
    {
        for (int i = n; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        n++;
        char newEle;
        cin >> newEle;
        a[pos - 1] = newEle;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
    }
    else
    {
        cout << "Invalid Position";
    }
    return 0;
}