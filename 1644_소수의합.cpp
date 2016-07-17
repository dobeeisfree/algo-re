#include <iostream>
#include <queue>
using namespace std;
/*
*	2016-07-06
*	https://www.acmicpc.net/problem/1644
*	http://59.23.113.171/30stair/primedoc/primedoc.php?pname=primedoc
*/
bool isPrime(int n)
{
	int i;
	for (i = 2; i*i <= n; ++i)
		if (n%i == 0) break;

	if (i*i > n) return true;
	return false;
}
int main()
{
	int N, sum, *data, cnt = 0, fcnt = 0;

	queue<int> box;
	cin >> N;

	
	for (int i = 2; i <= N; ++i)
		if (isPrime(i) == true) {
			cnt++;
			box.push(i);
		}

	data = new int[cnt];
	for (int i = 0; i < cnt; ++i)
	{
		data[i] = box.front();
		box.pop();
	}
	
	for (int i = 0; i < cnt; ++i)
	{
		sum = 0;

		sum += data[i];
		if (sum == N)
		{
			fcnt++;
			break;
		}
		for (int j = i + 1; j < cnt; ++j)
		{
			sum += data[j];
			if (sum == N)
			{
				fcnt++;
				break;
			}
			else if (sum > N) break;
		}
	}
	cout << fcnt << endl;
	return 0;
}