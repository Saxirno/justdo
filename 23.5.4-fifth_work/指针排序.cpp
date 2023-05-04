#include <bits/stdc++.h>
using namespace std;
int a[100];
void Sort(int num[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int x = num[j];
                num[j] = num[j + 1];
                num[j + 1] = x;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}