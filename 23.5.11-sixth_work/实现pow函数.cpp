#include <iostream>

using namespace std;

double power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    double result = base;
    for (int i = 1; i < abs(exponent); i++)
    {
        result *= base;
    }

    if (exponent < 0)
    {
        return 1 / result;
    }
    else
    {
        return result;
    }
}

int main()
{
    double base;
    int exponent;
    cin >> base;
    cin >> exponent;
    cout << power(base, exponent);
    return 0;
}
