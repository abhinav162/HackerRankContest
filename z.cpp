#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include<string.h>
using namespace std;

void insertLower(string a, int n)
{
    char *arr;
    arr = new char[n*2];

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>64 && arr[i]<91){
            char temp=arr[i+1];
            for(int j=n; j>i; j--){
                arr[j]=arr[j-1];
            }
            arr[i+1]=arr[i]+32;
            n++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]==' ')     continue;
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    string s;
    fflush(stdin);
    getline(cin, s);
    int N = s.length();
    if (n > 0 && n <= 20)
    {
        insertLower(s, N);
    }
    else
    {
        cout << "Invalid size of array";
    }
    return 0;
}
