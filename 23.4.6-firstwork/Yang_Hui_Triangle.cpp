#include <bits/stdc++.h>
using namespace std;
class triangle
{
public:
    triangle(int num)
    {
        count = num;
        pascal = new int *[count];
        for (int i = 0; i < count; i++)
        {
            pascal[i] = new int[i + 1];
            pascal[i][0] = pascal[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << pascal[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~triangle()
    {
        for (int i = 0; i < count; i++)
        {
            delete[] pascal[i];
        }
        delete[] pascal;
    }

private:
    int count;
    int **pascal;
};
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        triangle good(a[i]);
        good.print();
    }
    delete[] a;
    return 0;
}
