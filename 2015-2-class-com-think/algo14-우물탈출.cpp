#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		
		int n, u, d, count = 0;
		cin >> n >> u >> d;
		if (n == 0 || u==0 || d==0)
			break;
		while (1)
		{
			n -= u; // 올라가서
			count++;
			if(n <= 0)
			{
				cout << count << endl;
				break;
			}
			n += d; // 내려오고
			count++;
		}
	}
	//system("pause");
	return 0;
}