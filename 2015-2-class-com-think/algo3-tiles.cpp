#include <iostream>
using namespace std;
//2015-09-13, tiles, JB
int main()
{
	int w, h;
	int count1 = 0, count2 = 0, count3 = 0;

	cin >> w >> h;


	if (w % 8 != 0)
		count1++;
	if (h % 8 != 0)
		count2++;
	if (w % 8 != 0 && h % 8 != 0)
		count3++;

	cout << "The number of whole tiles is " <<
		(w / 8)*(h / 8) << " part tiles is " <<
		(w / 8 * count2) + (h / 8 * count1) + count3;

	return 0;
}