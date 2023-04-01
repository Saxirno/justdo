#include <iostream>

using namespace std;

int main()
{
    int n, index = 0;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 2)
        {
            found = true;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] == nums[i])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                cout << nums[i] << " ";
                index = 1;
            }
        }
    }

    if (index == 0)
    {
        cout << "none" << endl;
    }

    return 0;
}