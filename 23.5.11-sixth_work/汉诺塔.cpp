#include <iostream>
using namespace std;

// �����Ϊdisk�����Ӵ�from���ƶ���to��������ƶ�����
void move(int disk, char from, char to)
{
    cout << "������" << disk << "��" << from << "�ƶ���" << to << endl;
}

// ��n�����Ӵ�from������via���ƶ���to��
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
    cout << "������Բ������";
    cin >> n;
    hanoi(n, 'A', 'C', 'B'); // �����Ӵ�A���ƶ���C��������B��
    return 0;
}
