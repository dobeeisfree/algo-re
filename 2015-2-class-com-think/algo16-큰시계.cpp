#include <stdio.h>
#pragma warning(disable:4996)
// 2015-10-13, Å«½Ã°è, HJB
int main()
{
	int  hour, min;
	scanf("%d : %d", &hour, &min);
	if (min != 0)
		printf("%d", 0);
	else
	{
		if (hour + 12 > 24)
			printf("%d", hour - 12);
		else
			printf("%d", hour + 12);
	}
	//return 0
}