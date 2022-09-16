
#include <iostream>
using namespace std;
int removeSimilar(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1])
            a[j++] = a[i];

    a[j++] = a[n - 1];

    return j;
}

int main()
{
    int *a, n;
    cin >> n;
    if (n == 0 || n == 1 || n >= 30)
    {
        cout << "Invalid Input";
    }
    else
    {
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        n = removeSimilar(a, n);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        return 0;
    }
}