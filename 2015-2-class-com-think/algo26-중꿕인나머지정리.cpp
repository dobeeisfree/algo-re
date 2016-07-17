#include<iostream>
using namespace std;
// 2015-11-15, HJB, 중국인나머지정리
long long int find(long long int number, int n, int r, int t)
{
	while (1)
	{
		if (number%n == r)
			return number;
		number += t;
	}
}
int main()
{
	int a, b, c, r1, r2, r3;
	cin >> a >> b >> c;
	cin >> r1 >> r2 >> r3;
	
	long long int N = 1;
	N = find(N, a, r1, 1);
	N = find(N, b, r2, a);
	N = find(N, c, r3, a*b);

	cout << N;

	system("pause");
	return 0;
}