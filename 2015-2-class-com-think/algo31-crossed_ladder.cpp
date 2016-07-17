#include<iostream>
#include<math.h>
using namespace std;
// 2015-12-01, HJB, crossed_ladder // ('¤²')
double x, y, c, width, Big, Small=0, Mid;
void progres()
{
	Mid = (Small + Big) / 2;
	width = 1 / sqrt(x*x - Mid*Mid) + 1 / sqrt(y*y - Mid*Mid);
}
int main()
{
	cin >> x >> y >> c;
	(x > y) ? (Big = y) : (Big = x);
	while (fabs(width - (1 / c)) >= 0.0000001)
	{
		if (width*c == 1)
			break;
		(width*c < 1) ? (Small = Mid) : (Big = Mid);
		progres();
	}
	printf("%.3lf", Mid);
	system("pause");
	return 0;
}