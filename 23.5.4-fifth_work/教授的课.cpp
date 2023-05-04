#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int n, k;
    int count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (count > k)
    {
        cout << "No";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}