#include <iostream>
using namespace std;
void bubbleSort(int a[])
{
    int i, j, temp;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < (10 - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, a[10];

    for (i = 0; i < 10; i++)
        cin >> a[i];
    bubbleSort(a);

    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}