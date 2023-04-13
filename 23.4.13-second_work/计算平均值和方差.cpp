#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][6];
    for (int i = 0; i < n; i++)
    {
        double sum = 0, x = 0;
        for (int j = 0; j < 6; j++)
        { 
            cin >> a[i][j];
            sum += a[i][j];
        }
        sum /= 6.0;
        for (int j = 0; j < 6; j++)
        {
            x += pow(sum - a[i][j], 2);
        }
        x /= 6.0;
        cout << fixed << setprecision(2) << sum << " " << x << endl;
    }
    return 0;
}