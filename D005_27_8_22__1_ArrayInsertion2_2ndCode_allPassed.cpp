#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    if (n > 20)
    {
        cout << "Invalid size of array";
    }
    else
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string c;
        getline(cin, c);
        int nsize = c.size();
        for (int i = 0; i < nsize; i++)
        {
            if (c[i] == 32)
                continue;
            cout << c[i] << " ";
            if (c[i] >= 65 && c[i] <= 90)
            {
                cout << (char(c[i] + 32)) << " ";
            }
        }
    }

    return 0;
}