#include <iostream>
using namespace std;
void display(int *a, int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
void insertionSort(int *a, int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = a[i];
        j = i;
        while (j > 0 && a[j - 1] > key)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    display(arr, n);
}