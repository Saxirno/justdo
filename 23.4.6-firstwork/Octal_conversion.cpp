#include <bits/stdc++.h>
using namespace std;
int trans(int x)
{
    int y = 0;
    int z = 1;
    while (x)
    {
        y += (x % 8) * z;
        x /= 8;
        z *= 10;
    }
    cout << y;
    return 0;
}
int main()
{
    int x;
    cin >> x;
    trans(x);
}
