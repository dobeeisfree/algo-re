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
		for (int i = n / 5; i > 0; i--) // 몫으로 검색
		{
			if ((n - (i * 5)) % 3 == 0) // 3으로 나누어지는 부분을 찾음
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
