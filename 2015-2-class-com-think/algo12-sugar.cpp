#include <iostream>
using namespace std;
//2015-10-06, sugar, JB
int main()
{
	int n, count=0;
	cin >> n;
	if (n % 5 == 0)
			cout << n / 5 << endl;
	else
	{
		for (int i = n / 5; i > 0; i--) // ������ �˻�
		{
			if ((n - (i * 5)) % 3 == 0) // 3���� ���������� �κ��� ã��
			{
				cout << i + ((n - (i * 5)) / 3) << endl;
				return 0;
			}
		}
		if (n % 3 == 0)
			cout << n / 3 << endl;
		else
			cout << -1 << endl;
	}
	system("pause");
}
