#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    scanf("%d/%d", &a, &b);
    cout << 0 << ".";
    for (int i = 0; a > 0 && i < 200; i++)
    {
        a *= 10;
        cout << a / b;
        a %= b;
    }
    return 0;
}