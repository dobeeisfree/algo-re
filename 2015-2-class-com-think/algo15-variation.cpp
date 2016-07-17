#include<iostream>
#include<cmath>
using namespace std;
// 2015-10-13, variation, HJB
int main()
{
	int n; float sum = 0, vari = 0;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for (int k = 0; k < n; k++)
		vari += pow(arr[k]-(float)(sum/n), 2);
	printf("%.2f", vari/n);

	system("pause");
	return 0;
}
