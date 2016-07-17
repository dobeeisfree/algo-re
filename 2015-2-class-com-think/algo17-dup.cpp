#include<iostream>
using namespace std;
// 2015-10-13, dup(중복수 제거), HJB
int main()
{
	int arr[10], count;
	
	for(int i = 0; i < 10; i++)
		cin >> arr[i];
	
	for (int j = 0; j < 10; j++)
	{
		count = 0;
		for (int k = j + 1; k < 11; k++)
		{
			if (arr[j] == arr[k])
			{
				arr[k] = 11;
				count++;
			}
		}
		if (count != 0)
			arr[j] = 11;
	}
	
	for (int out = 0; out < 10; out++)
	{
		if (arr[out] != 11)
			cout << arr[out] << " ";
	}
	system("pause");
	return 0;
}