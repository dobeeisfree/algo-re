#include<iostream>
using namespace std;
//못생긴수
int main()
{
	int n;
	cin >> n;
	int ugly = 2, k, count = 2;
	if (n == 1)
	{
		cout << "The " << n << "'th ugly number is " << n << "." << endl;
		system("pause");
		return 0;
	}
	else
	{
		while (count != n)
		{
			ugly++;
			k = ugly;
			while (k != 1)
			{
				if (k % 2 == 0)
					k /= 2;
				else if (k % 3 == 0)
					k /= 3;
				else if (k % 5 == 0)
					k /= 5;
				else
					break;
			}
			if (k == 1)
				count++;
		}
	}
	cout << "The " << n << "'th ugly number is " << ugly << "." << endl;
	system("pause");
	return 0;
}