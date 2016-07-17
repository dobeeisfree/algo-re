#include <iostream>
#include <stack>
#include <queue>
using namespace std;
/*
*	2016-07-07
*	https://www.acmicpc.net/problem/1874
*/
int n, *data;
stack <int> input;
queue <char> save;

int main()
{
	int i, P;
	
	cin >> n;
	data = new int[n];
	for (i = 0; i < n; ++i)
		cin >> data[i];
		
	P = 1;
	for (i = 0; i < n; ++i)
	{
		for (; P <= n + 1; ++P)
		{
			if (!input.empty())
				if (input.top() == data[i])
				{
					input.pop();
					save.push('-');
					break;
				}
			input.push(P);
			save.push('+');
		}
	}	
	if (input.empty() == true)
	{
		while (!save.empty())
		{
			cout << save.front() << "\n";
			save.pop();
		}
	}
	else cout << "NO\n";
	return 0;
}