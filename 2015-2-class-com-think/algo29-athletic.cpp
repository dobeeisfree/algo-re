#include<iostream>
using namespace std;
// 2015-11-24, hjb, chap09.athletic
int cnt = 0, total = 0, i = 0;
char athletic[1];
void round(int num, int win, int lose)
{
	if (win == num)
	{
		cnt++;
		for (i = 0; i < total; i++)
			cout << athletic[i];
		cout << endl;
		total--;
		return;
	}
	if (lose == num)
	{
		total--;
		return;
	}

	athletic[total++] = 'o';
	round(num, win + 1, lose);
	athletic[total++] = 'x';
	round(num, win, lose + 1);

	total--;
}
int main()
{
	int num = 0, win = 0, lose = 0;
	cin >> num;
	round(num, win, lose);
	cout << "total " << cnt << " case(s)";
	system("pause");
	return 0;
}