#include<iostream>
using namespace std;
//2015-10-06, rprime, JB
int main()
{
	int a, b, count=0;
	cin >> a >> b;
	for (int i = 2; i < b; i++)
	{	
		if (a%i == 0 && b%i == 0){ count++; }
	}
	if (count == 0)
		cout << "yes";
	else
		cout << "no";
	system("pause");
	return 0;
}