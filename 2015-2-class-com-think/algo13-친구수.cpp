#include <iostream>
using namespace std;
//2015-10-06, ģ����, JB
int main()
{
	int num, sum1, sum2;
	cin >> num;
	for (int n = 220; n <= num; n++) // ������ ģ���� ����
	{
		//�ʱ�ȭ
		sum1 = 0;
		sum2 = 0;
		// sum1�� sum2�� �����
		for (int i = 1; i <= n / 2; i++)
		{
			if (n%i == 0)
				sum1 += i;
		}
		for (int j = 1; j <= sum1 / 2; j++)
		{
			if (sum1%j == 0)
				sum2 += j;
		}
		// 220���� ���
		if (n == sum2 && n != sum1)
		{
			cout << n << " " << sum1 << endl;
			n = sum1;
		}
	}
	system("pause");
}
