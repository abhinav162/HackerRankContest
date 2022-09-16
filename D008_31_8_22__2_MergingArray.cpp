#include<iostream>
using namespace std;
int main()
{
    int a1[10], a2[10], a3[10];
    int a, b, i, k;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>a1[i];
        a3[i] = a1[i];
    }
    k = i;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a2[i];
        a3[k] = a2[i];
        k++;
    }
    for(i=0; i<k; i++)
        cout<<a3[i]<<" ";
    
    return 0;
}