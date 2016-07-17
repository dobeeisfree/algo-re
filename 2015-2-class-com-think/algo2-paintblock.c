#include <stdio.h>
#pragma warning(disable:4996)
//2015-09-13, paintblock, JB
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int top_bottom = 2*((a*b)-4-(a-2)*(b-2));
	int middleFloor = (c-2)*4;
	printf("%d", top_bottom+middleFloor);
	system("pause");
	return 0;
}