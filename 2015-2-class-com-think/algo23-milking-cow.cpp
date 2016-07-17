#include<iostream>
#include <algorithm>
using namespace std;
// milking cow
struct farm{
	int begin;
	int end;
};
void swap(farm * f, int p)
{
	if (p == 0)
		return;
	else
	{
		if (f[p].begin < f[p- 1].begin)
		{
			farm temp = f[p];
			f[p] = f[p- 1];
			f[p - 1] = temp;
		}
		swap(f, p - 1);
	}
}
int main()
{
	int number;
	cin >> number;
	farm * f = new farm[number];

	for (int i = 0; i < number; i++)
	{
		cin >> f[i].begin >> f[i].end;
		swap(f, i);
	}	
	int time, notime;
	time = f[0].end - f[0].begin;
	notime = 0;
	for (int i = 1; i < number; i++)
	{
		if (f[i].begin > f[i - 1].end)
		{
			if (f[i].begin - f[i - 1].end > notime)
				notime = f[i].begin - f[i - 1].end;
		}
		else
		{
			f[i].begin = f[i - 1].begin;
			if (f[i - 1].end > f[i].end)
				f[i].end = f[i - 1].end;
			if (f[i].end - f[i].begin > time)
				time = f[i].end - f[i].begin;
		}
	}
	cout << time << " " << notime;

	system("pause");
	return 0;
}