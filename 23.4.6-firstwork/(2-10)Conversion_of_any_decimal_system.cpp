#include <bits/stdc++.h>
using namespace std;
int anytrans(int x, int y)
{
    int z = 0, t = 1;
    while (x)
    {
        z += (x % y) * t;
        x /= y;
        t *= 10;
    }
    return z;
}
int main()
{
    int n, a, b, i;
    cin >> n;
    int c[n];
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        c[i] = anytrans(a, b);
    }
    for (i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}