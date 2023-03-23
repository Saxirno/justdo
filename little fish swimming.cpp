#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= d)
    {
        cout << c - a << " " << d - b;
    }
    else
    {
        cout << c - a - 1 << " " << d + 60 - b;
    }
    return 0;
}