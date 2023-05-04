#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<int> pos;
    int found = s2.find(s1);
    while (found != string::npos)
    {
        pos.push_back(found);
        found = s2.find(s1, found + 1);
    }
    if (pos.empty())
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            cout << pos[i] << " ";
        }
    }
    return 0;
}
