#include<iostream>
#include<list>
using namespace std;
// josephus
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	m = m - 1;
	k = k - 1;

	list<int> Knight;
	for (int i = 1; i <= n; i++)
		Knight.push_back(i);


	list<int>::iterator iter = Knight.begin();

	int c1 = 0;
	while (c1 != m)
	{
		iter++;
		c1++;
	}
	while (1)
	{
		int c2 = 0;

		cout << *iter << " ";
		iter = Knight.erase(iter);
		if (iter == Knight.end())
			iter = Knight.begin();


		if (Knight.size() == 1)
		{
			cout << Knight.front() << endl;
			break;
		}

		while (c2 != k)
		{
			iter++;
			if (iter == Knight.end())	
				iter = Knight.begin();
			c2++;
		}
	}
	system("pause");
	return 0;
}