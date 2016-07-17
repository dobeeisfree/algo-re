#include <iostream>
#define CHECK 1
#define MAX 100000
#define GO   (data[front + 1)
#define BACK (data[front - 1)
#define JUMP (data[front * 2)
using namespace std;
/*
	http://59.23.113.171/30stair/catch_cow/catch_cow.php?pname=catch_cow
*/
int main()
{
	int data[MAX + 1] = { 0 },
		time[MAX + 1] = { 0 },
		visited[MAX + 1] = { 0 };

	int N, K,
		front = 0, rear = 0;

	cin >> N >> K;

	if (N == K)
	{
		cout << 0;
		return 0;
	}
	else if (N > K)
	{
		cout << N - K;
		return 0;
	}
	else
	{
		data[rear] = N;
		time[rear] = 0;
		visited[N] = CHECK;

		while (1)
		{
			if (GO <= MAX && visited[GO] != CHECK)
			{
				rear++;
				data[rear] = GO;
				time[rear] = time[front] + 1;
				visited[data[rear]] = CHECK;
				if (data[rear] == K) break;
			}
			if (BACK >= 0 && visited[BACK] != CHECK)
			{
				rear++;
				data[rear] = BACK;
				time[rear] = time[front] + 1;
				visited[data[rear]] = CHECK;
				if (data[rear] == K) break;
			}
			if (JUMP <= MAX && visited[JUMP] != CHECK)
			{
				rear++;
				data[rear] = JUMP;
				time[rear] = time[front] + 1;
				visited[data[rear]] = CHECK;
				if (data[rear] == K) break;
			}
			++front;
		}
	}
	cout << time[rear];
	return 0;
}