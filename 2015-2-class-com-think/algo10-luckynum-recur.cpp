#include<iostream>
using namespace std;
//2015-10-06, luckynum, JB
void num(int i)
{
	if (i == 0)
		return;
	num((i - 1) / 2); // 자리수를 올려감
	if (i > 0) // 자리수 판별
	{
		if (i % 2 == 0) //짝
			cout << "7";
		else //홀
			cout << "4";
	}
}
int main()
{
	int k;
	cin >> k;
	num(k);
	system("pause");
	return 0;
}
