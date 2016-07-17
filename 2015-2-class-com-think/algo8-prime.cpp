#include<iostream>
using namespace std;
//2015-10-06, prime, JB
int main()
{
	int p;
	cin >> p;
	int count = 0;
	for (int i = p; i > 0; i--)
	{
		if (p%i == 0)
			count++;
	}
	if (count == 2)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;
	system("pause");
}
