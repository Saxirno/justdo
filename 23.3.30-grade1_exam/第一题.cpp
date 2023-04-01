#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "请输入一个三位数：";
    cin >> num;
    sum += num % 10; // 取个位数
    num /= 10;
    sum += num % 10; // 取十位数
    num /= 10;
    sum += num; // 取百位数
    cout << "各位数之和为：" << sum << endl;
    return 0;
}