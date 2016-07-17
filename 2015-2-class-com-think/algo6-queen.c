#include <stdio.h>
#pragma warning(disable:4996)
//2015-09-20, queen, JB 
int main()
{
	long long int N, M;
	scanf("%lld %lld", &N, &M);
	printf("%lld", N<M ? N : M);
	system("pause");
	return 0;
}