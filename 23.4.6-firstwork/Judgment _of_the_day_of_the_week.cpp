#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    // 计算所在年份距离1900年有多少个闰年
    int num_leap_years = 0;
    for (int y = 1900; y < year; y++)
    {
        if (isLeapYear(y))
        {
            num_leap_years++;
        }
    }

    // 计算所在月份到1月1日的天数
    int days_since_jan_1 = 0;
    for (int m = 1; m < month; m++)
    {
        switch (m)
        {
        case 2:
            days_since_jan_1 += isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days_since_jan_1 += 30;
            break;
        default:
            days_since_jan_1 += 31;
            break;
        }
    }
    days_since_jan_1 += day - 1;

    // 计算总天数，并将其对7取模，得到星期几
    int total_days = 365 * (year - 1900) + num_leap_years + days_since_jan_1;
    int weekday = (total_days % 7 + 1) % 7; // 星期天为0，星期一到六依次为1到6

    switch (weekday)
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    }

    return 0;
}
