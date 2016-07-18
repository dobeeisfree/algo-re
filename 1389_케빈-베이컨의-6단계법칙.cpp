#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;
/*
	2016-07-18
	https://www.acmicpc.net/problem/1389
*/
int d[MAX][MAX];
int main()
{
	int N, M;
	int i, j, k;
	int sum;

	cin >> N >> M;

	for (i = 0; i < N; ++i)
		for (j = 0; j < N; ++j)
			d[i][j] = (i == j ? 0 : MAX + 1);

	while(M--)
	{
		cin >> i >> j;
		i--; j--;
		d[i][j] = d[j][i] = 1;
	}
	/*
		floyd
	*/
	for (k = 0; k < N; k++)
		for (i = 0; i < N; i++)
		{
			if (k == i) continue;
			for (j = 0; j < N; j++)
				if (k != j && i != j)
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		}

	int min = 1e9;
	for (i = 0; i < N; ++i)
	{
		sum = 0;
		for (j = 0; j < N; ++j)
		{
			sum += d[i][j];
		}
		if (sum < min)
		{
			k = i;
			min = sum;
		}
	}
	cout << k + 1;
	return 0;
}