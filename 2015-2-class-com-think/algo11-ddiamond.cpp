#include <iostream>
using namespace std;
//2015-10-06, ddiamond, JB
int main()
{
	int num, max;
	cin >> num;
	max = num / 2 + 1; //ǥ���Ǵ� ������ �ƽø�

	// �� �ﰢ
	for (int i = 1; i < max + 1; i++)
	{
		for (int j = 0; j < max - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++) //��
		{
			cout << k;
		}
		for (int w = i - 1; w > 0; w--) //��
		{
			cout << w;
		}
		cout << endl;
	}
	// �Ʒ� �ﰢ
	for (int i = 1; i < max + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= max - i; k++) //��
		{
			cout << k;
		}
		for (int w = max - i - 1; w >= 1; w--) //��
			cout << w;
		cout << endl;
	}
	system("pause");
	return 0;
}