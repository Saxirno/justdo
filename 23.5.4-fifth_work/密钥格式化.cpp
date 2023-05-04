#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    string res;
    int cnt = 0; // 记录当前分组大小
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '-')
        {
            res += toupper(s[i]); // 转换为大写字母
            cnt++;
            if (cnt == k) // 达到分组大小，加'-'
            {
                res += '-';
                cnt = 0;
            }
        }
    }
    if (res.back() == '-')
        res.pop_back();              // 去掉最后一个'-'
    reverse(res.begin(), res.end()); // 翻转字符串
    cout << res << endl;
    return 0;
}
