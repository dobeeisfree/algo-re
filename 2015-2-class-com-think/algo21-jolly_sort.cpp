#include <iostream>
#include <algorithm>
using namespace std;
// 2015-10-29, HJB, jolly_sort
int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	if (n % 2 == 1)
	{
		for (int i = 0; i< n / 2 ; i++)
			cout << arr[i] << " " << arr[n - 1 - i] << " ";
		cout << arr[n / 2];
	}
	else
	{
		for (int i = 0; i< n / 2; i++)
			cout << arr[i] << " " << arr[n - 1 - i] << " ";
		
	}
	system("pause");
	return 0;
}