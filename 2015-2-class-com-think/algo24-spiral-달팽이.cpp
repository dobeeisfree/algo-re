#include<iostream>
using namespace std;
// 2015-11-07, HJB, spiral
int main()
{
	int dal[20][20];
	int i, num, max;
	int x = 0, y = -1;
	int t = 1, count = 1;

	cin >> num;
	max = num;

	while (0 <= max)
	{
		// Çà
		for (i = 0; i < max; i++)
		{
			y += t;
			dal[x][y] = count;
			count++;
		}
		max--;
		// ¿­
		for (i = 0; i < max; i++)
		{
			x += t;
			dal[x][y] = count;
			count++;
		}
		// ¹æÇâ ¹Ù²ãÁÜ
		t = t *(-1);
	}


	for (x = 0; x < num; x++)
	{
		for (y = 0; y < num; y++)
			printf("%5d", dal[x][y]);
		cout << endl;
	}
	system("pause");
	return 0;
}