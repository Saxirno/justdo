#include <bits/stdc++.h>
using namespace std;
// 求最大公约数
long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// 求最小公倍数
long long lcm(long long a, long long b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int n;
    cin >> n;

    long long sum_n = 0, sum_d = 1; // 分别记录分数和的分子和分母，初值分别为0和1
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        char s; // 读入分数时用到的变量
        cin >> a >> s >> b;

        // 如果分母为0，输出error并退出程序
        if (b == 0)
        {
            cout << "error" << endl;
            return 0;
        }

        // 计算通分后的分母
        long long sd = lcm(sum_d, b);

        // 将两个分数通分后加起来
        sum_n = sum_n * (sd / sum_d) + a * (sd / b);
        sum_n /= gcd(abs(sum_n), sd);
        sum_d = sd / gcd(abs(sum_n), sd);
    }

    // 如果分子为0，直接输出0
    if (sum_n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    // 化简分数
    long long g = gcd(abs(sum_n), sum_d);
    sum_n /= g;
    sum_d /= g;

    // 输出结果
    if (sum_d == 1)
    {
        cout << sum_n << endl;
    }
    else
    {
        cout << sum_n << "/" << sum_d << endl;
    }

    return 0;
}