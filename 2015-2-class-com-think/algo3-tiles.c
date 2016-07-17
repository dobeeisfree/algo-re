#include <stdio.h>
#pragma warning(disable:4996)
//2015-09-13, tiles, JB
int main()
{
	int w, h;
	scanf("%d %d", &w, &h);
	int wt, pt, partArea=0;
	wt = (w / 8)*(h / 8);
	partArea = (w*h) - (wt*64);
	if (partArea != 0)
	{
		pt = partArea/(8*((w % 8)+(h % 8)));
	}
	else
	{
		pt == 0;
	}
	printf("The number of whole tiles is %d part tiles is %d", &wt, &pt);
	system("pause");
	return 0;
}