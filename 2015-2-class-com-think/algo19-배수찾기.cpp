#include <iostream> 
using namespace std;
// 배수찾기 문제틀림
int main() {

	int n;
	cin >> n;
	int* arr = new int[n];
	int* sunchar = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i == 0)
			sunchar[i] = arr[i] % n;
		else
			sunchar[i] = (sunchar[i - 1] + arr[i] % n) % n;
		if (sunchar[i] == 0)
		{
			cout << i + 1 << "\n";
			for (int j = 0; j <= i; j++) 
				cout << arr[j] << "\n";
			return 0;
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				if (sunchar[i] == sunchar[j])
				{
					cout << i - j << "\n";
					for (int k = j + 1; k <= i; k++)
						cout << arr[k] << endl;
					return 0;
				}
			}
		}
	}
	cout << 0;
	return 0;
}