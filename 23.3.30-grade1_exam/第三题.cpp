#include <iostream>
#include <string>
using namespace std;

bool isValidChar(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= '0' && c <= '9')
        return true;
    if (c == '_' || c == '-')
        return true;
    if (c == '@' || c == '.')
        return true;
    return false;
}

bool isValidEmail(string email)
{
    int n = email.size();
    int atPos = -1, dotPos = -1;
    for (int i = 0; i < n; i++)
    {
        if (!isValidChar(email[i]))
            return false;
        if (email[i] == '@')
        {
            if (atPos != -1)
                return false;
            atPos = i;
        }
        else if (email[i] == '.')
        {
            if (dotPos != -1)
                return false;
            if (atPos == -1 || i == n - 1 || i == atPos + 1)
                return false;
            dotPos = i;
        }
    }
    return atPos != -1 && dotPos != -1;
}

int main()
{
    string email;
    cin >> email;
    if (isValidEmail(email))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}