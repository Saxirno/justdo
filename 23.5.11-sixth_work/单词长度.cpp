#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // 读取一行文本

    // 将单词间的空格替换为逗号，方便后续使用 stringstream 处理
    replace(str.begin(), str.end(), ' ', ',');
    str.erase(str.find_last_of('.')); // 去掉字符串末尾的句号

    vector<int> wordLengths; // 记录每个单词的长度

    stringstream ss(str);
    string word;
    while (getline(ss, word, ','))
    { // 逐个处理单词
        if (!word.empty())
        {                                         // 如果当前单词不为空
            wordLengths.push_back(word.length()); // 记录当前单词长度
        }
    }

    // 输出每个单词的长度
    for (auto len : wordLengths)
    {
        cout << len << " ";
    }
    cout << endl;

    return 0;
}
