#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    student() {}
    student(char *z, double x, double y)
    {
        s = z;
        daily_grade = x;
        finally_grade = y;
        total_grade = daily_grade * 0.4 + finally_grade * 0.6;
    }
    void print()
    {
        cout << s << " " << daily_grade << " " << finally_grade << " " << total_grade << endl;
    }
    bool operator<(const student &other) const
    {
        return total_grade > other.total_grade;
    }

private:
    char *s;
    double daily_grade;
    double finally_grade;
    double total_grade;
};

int main()
{
    char t[100][5];
    double a[100], b[100];
    int i = 0;
    for (; scanf("%s %lf %lf", t[i], &a[i], &b[i]) != EOF; i++)
        ;

    student *number = new student[i];
    for (int j = 0; j < i; j++)
    {
        number[j] = student(t[j], a[j], b[j]);
    }

    sort(number, number + i);

    for (int j = 0; j < i; j++)
    {
        number[j].print();
    }

    delete[] number;
    return 0;
}
