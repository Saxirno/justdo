#include <iostream>
using namespace std;

// 将编号为disk的盘子从from柱移动到to柱，输出移动步骤
void move(int disk, char from, char to)
{
    cout << "将盘子" << disk << "从" << from << "移动到" << to << endl;
}

// 将n个盘子从from柱借助via柱移动到to柱
void hanoi(int n, char from, char to, char via)
{
    if (n == 1)
    {
        move(1, from, to);
        return;
    }
    hanoi(n - 1, from, via, to);
    move(n, from, to);
    hanoi(n - 1, via, to, from);
}

int main()
{
    int n;
    cout << "请输入圆盘数：";
    cin >> n;
    hanoi(n, 'A', 'C', 'B'); // 将盘子从A柱移动到C柱，借助B柱
    return 0;
}
