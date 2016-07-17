#include<iostream>
using namespace std;
// 2015-11-24, hjb, chap09.upstair
int n;
int down(int num)
{
	if (num < 4)
		return num;
	return down(num - 1) + down(num - 2);
}
int main()
{
	cin >> n;
	if (n < 4)
		cout << n << endl;
	else
		cout << down(n) << endl;
	system("pause");
	return 0;
}