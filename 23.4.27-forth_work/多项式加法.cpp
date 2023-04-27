#include <bits/stdc++.h>
using namespace std;
int a[101], b[101];
int c[101], d[101];
int main()
{
    for (int i = 0;; i++)
    {
        cin >> a[i];
        int x = a[i];
        cin >> b[x];
        if (a[i] == 0)
        {
            break;
        }
    }
    for (int i = 0;; i++)
    {
        cin >> c[i];
        int x = c[i];
        cin >> d[x];
        if (c[i] == 0)
        {
            break;
        }
    }
    for (int i = 100; i >= 0; i--)
    {
        if (b[i] + d[i] != 0)
        {
            cout << b[i] + d[i];
            if(i!=0)
            {
                cout<<"x";
            }
            if (i != 1&&i!=0)
            {
                cout << i;
            }
        }
        if (b[i] + d[i] > 0 && i != 0)
        {
            cout << "+";
        }
        if (b[i] + d[i] < 0 && i != 0)
        {
            cout << "-";
        }
    }
    return 0;
}