#include <bits/stdc++.h>
using namespace std;
class palindrome
{
public:
    palindrome(int x, int y)
    {
        m = x;
        k = y;
    }
    void findsome()
    {
        int count = 0;
        for (int j = m; count < k; j++)
        {
            int t = j, inver = 0;
            while (t)
            {
                inver = inver * 10 + t % 10;
                t /= 10;
            }
            if (inver == j)
            {
                cout << j << " ";
                count++;
            }
        }
        cout << endl;
    }

private:
    int m;
    int k;
};
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        palindrome find(a, b);
        find.findsome();
    }
    return 0;
}