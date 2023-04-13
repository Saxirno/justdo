#include <bits/stdc++.h>
using namespace std;
class circle
{
public:
    circle(int r)
    {
        this->r = r;
    }
    void d()
    {
        int D = 2 * r;
        cout << D << endl;
    }
    void c()
    {
        double C = 2 * x * r;
        cout << C << endl;
    }
    void s()
    {
        double S = x * r * r;
        cout << S << endl;
    }

private:
    int r;
    double x = 3.14;
};
int main()
{
    int r;
    cin >> r;
    circle one(r);
    one.d();
    one.c();
    one.s();
    return 0;
}