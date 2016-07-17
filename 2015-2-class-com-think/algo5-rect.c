#include <stdio.h>
#pragma warning(disable:4996)
//2015-09-20, 직사각형, JB
int main()
{
	int x, y, p, q, xr, yr, pr, qr;
	scanf("%d %d %d %d %d %d %d %d", &x, &y, &p, &q, &xr, &yr, &pr, &qr);

	if ((x == pr && q == yr) || (y == qr && p == xr) || (x == pr && y == qr) || (p == xr && q == yr))
		printf("point");
	else if (qr == y || yr == q || x == pr || p == xr)
		printf("line"); 
	else if (p<xr || q<yr || x>pr || y >qr)
		printf("none");
	else
		printf("rectangle");
	system("pause");
	return 0;
}