#include <bits/stdc++.h>
using namespace std;

int main()
{
    int decimal, base;
    int n;
    string count = "0123456789ABCDEF";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string trans;
        cin >> decimal >> base;
        while (decimal)
        {
            trans = count[decimal % base] + trans;
            decimal /= base;
        }
        cout << trans << endl;
    }
    return 0;
}