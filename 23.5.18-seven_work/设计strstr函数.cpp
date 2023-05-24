#include <bits/stdc++.h>
using namespace std;

char *my_strstr(char *str1, char *str2)
{
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 < len2)
        return NULL;
    for (int i = 0; i < len1 - len2 + 1; i++)
    {
        int j = 0;
        for (j = 0; j < len2; j++)
        {
            if (str1[i + j] != str2[j])
                break;
        }
        if (j == len2)
            return str1 + i;
    }
    return NULL;
}

int main()
{
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    char *res = my_strstr(str1, str2);
    if (res != NULL)
        cout << res - str1 << endl;
    else
        cout << -1 << endl;
    return 0;
}
