#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++; // 统计每个字符出现的次数
    }
    sort(freq, freq + 26, greater<int>()); // 将字符出现次数从大到小排序
    int ans = 0, weight = 26;
    for (int i = 0; i < 26 && freq[i] > 0; i++)
    {
        ans += freq[i] * weight--; // 将权值从大到小依次分配给字符
    }
    cout << ans << endl;
    return 0;
}
