#include<iostream>
using namespace std;
//2015-10-06, luckynum, JB
void num(int i)
{
	if (i == 0)
		return;
	num((i - 1) / 2); // �ڸ����� �÷���
	if (i > 0) // �ڸ��� �Ǻ�
	{
		if (i % 2 == 0) //¦
			cout << "7";
		else //Ȧ
			cout << "4";
	}
}
int main()
{
	int k;
	cin >> k;
	num(k);
	system("pause");
	return 0;
}
