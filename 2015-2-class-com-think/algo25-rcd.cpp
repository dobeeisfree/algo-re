#include<iostream>
#include<algorithm>
using namespace std;
// 2015-11-10, HJB, rcd 중간값 찾기
int main()
{
	int n, tries;
	cin >> n;
	int *num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	cin >> tries;
	int *srt = new int[n];
	for (int i = 0; i < tries; i++)
	{
		int s, e;
		cin >> s >> e;
		for (int i = s - 1; i < e; i++)
			srt[i] = num[i];
		sort(srt + s - 1, srt + e);
		cout << srt[s + (e - s) / 2 - 1] << endl;
	}
	system("pause");
	return 0;
}