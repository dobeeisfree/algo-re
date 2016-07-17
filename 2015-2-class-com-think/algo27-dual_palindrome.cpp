#include<iostream>
using namespace std;
// 2015-11-15, HJB, dual_palindrome
bool palindrome(int number, int base)
{
	int arr[100];
	int c = 0;
	while (number != 0)
	{
		arr[c++] = number % base;
		number /= base;
	}
	for (int i = 0; i <= (c - 1) / 2; ++i)
	{
		if (arr[i] != arr[c - 1 - i])
			return false;
	}
	return true;
}
bool search(int number)
{
	int count = 0;
	for (int i = 2; i <= 10; ++i)
	{
		if (palindrome(number, i))
		{
			count++;
			if (count == 2)
				return true;
		}
	}
	return false;
}
int main()
{
	int N, S;
	cin >> N >> S;
	while (N!=0)
	{
		N--;
		while (!search(++S));
		cout << S << endl;
	}
	system("pause");
	return 0;
}