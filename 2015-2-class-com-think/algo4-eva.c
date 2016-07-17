#include <stdio.h>
#pragma warning(disable:4996)
//2015-09-20, 등차/등비수열(eva), JB
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int nextNum=0;

	if ((b-a) == (d-c))
	{
		nextNum = d+(d-c);
	}
	else
	{
		nextNum = d*(d/c);
	}
	printf("%d %d %d %d %d", a, b, c, d, nextNum);
	system("pause");
	return 0;
}