#include <iostream>
using namespace std;
//2015-10-06, ddiamond, JB
int main()
{
	int num, max;
	cin >> num;
	max = num / 2 + 1; //표현되는 숫자의 맥시멈

	// 위 삼각
	for (int i = 1; i < max + 1; i++)
	{
		for (int j = 0; j < max - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++) //증
		{
			cout << k;
		}
		for (int w = i - 1; w > 0; w--) //감
		{
			cout << w;
		}
		cout << endl;
	}
	// 아래 삼각
	for (int i = 1; i < max + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= max - i; k++) //증
		{
			cout << k;
		}
		for (int w = max - i - 1; w >= 1; w--) //감
			cout << w;
		cout << endl;
	}
	system("pause");
	return 0;
}