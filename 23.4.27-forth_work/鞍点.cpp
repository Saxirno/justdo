#include <bits/stdc++.h>
using namespace std;
int m[100];
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (max < a[i][j])
            {
                max = a[i][j];
                m[i] = j;
            }
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int floa = 1;
        int x = m[i];
        for (int j = 0; j < n; j++)
        {
            if (a[i][x] > a[j][x])
            {
                floa = 0;
            }
        }
        if (floa)
        {
            cout << i << " " << x;
            flag = 1;
        }
    }
    if (!flag)
    {
        cout << "NO";
    }
    return 0;
}