#include <bits/stdc++.h>
using namespace std;
int main()
{
    int BJT, UTC;
    cin >> BJT;
    if (BJT >= 800)
    {
        UTC = BJT - 800;
    }
    else
    {
        UTC = 1600 + BJT;
    }
    cout << UTC;
    return 0;
}