#include <stdio.h>
#pragma warning(disable:4996)
// 기약분수
int gcd(int a, int b)
{
	int r = 1;
	while (r != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int bigger(int a1, int a2, int b1, int b2)
{
	if (a1*b2>b1*a2) 
		return 1;
	else 
		return 0;
}
int main() {
	int data[20000] = { 0 };
	int i, j, k = 0,
		nk, n, x, y;
	scanf("%d", &n);
	// gcd
	for (i = 2; i <= n; ++i) 
	{
		for (j = 1; j<i; ++j) 
		{
			if (gcd(i, j) == 1) 
			{
				data[k++] = j;
				data[k++] = i;
			}
		}
	}
	nk = k;
	// 버블정렬
	for (i = 0; i<nk; i += 2)
	{
		for (j = 0; j<nk - i - 2; j += 2)
		{
			if (bigger(data[j], data[j + 1], data[j + 2], data[j + 3])) 
			{
				x = data[j];
				y = data[j + 1];
				data[j] = data[j + 2];
				data[j + 1] = data[j + 3];
				data[j + 2] = x;
				data[j + 3] = y;
			}
		}
	}
	// 출력
	printf("0/1\n");
	for (i = 0; i<nk; i += 2)
		printf("%d/%d\n", data[i], data[i + 1]);
	printf("1/1\n");

	system("pause");
	return 0;
}