#include <bits/stdc++.h>
using namespace std;
// 求最大公约数
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// 求最小公倍数
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);
    return 0;
}