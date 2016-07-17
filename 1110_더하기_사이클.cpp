#include <iostream>
using namespace std;
/*
*	2016-07-09
*	https://www.acmicpc.net/problem/1110
*	0 ~ 99
*/
int main()
{
	int N, N2,
		a, b, len = 0; 
	
	cin >> N;
	N2 = N;
	do {
		a = N / 10;
		b = N % 10;
		N = (b*10) + (a+b)%10;
		++len;
	} while (N2 != N);

	cout << len;
	return 0;
}