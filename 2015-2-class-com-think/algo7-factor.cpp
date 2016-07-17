#include<iostream>
using namespace std;
//2015-10-06, factor, JB
int main()
{
	int f;
	cin >> f;
	for (int i = f; i > 0; i--)
	{
		if (f%i == 0)
			cout << f / i << endl;
	}
	system("pause");
}