#include<iostream>
using namespace std;
// 2015-10-29, HJB, heapsort
void printAll(int list[], int &lSize)
{
	for (int w = 0; w < lSize; w++)
		cout << list[w] << " ";
}
void SingleHeap(int UnHeap[], int &size)
{
	int parent;
	int index;
	int temp;
	for (int i = 1; i < size; i++)
	{
		index = i;
		while (true)
		{
			parent = (index - 1) / 2;
			if (UnHeap[parent] < UnHeap[index])
			{
				temp = UnHeap[index];
				UnHeap[index] = UnHeap[parent];
				UnHeap[parent] = temp;
				index = parent;
			}
			else
				break;
		}
	}
}
void Heap(int UnHeap[], int &size)
{
	int temp, child = 0;
	for (int i = 1; i < 4; i++)
	{
		UnHeap[0] = UnHeap[size - i];
		for (int j = 0;;)
		{
			child = 2 * (j + 1);
			if (child >= size - i)
				break;
			if (UnHeap[child] <= UnHeap[child - 1])
			{
				if (UnHeap[j] < UnHeap[child - 1])
				{
					temp = UnHeap[j];
					UnHeap[j] = UnHeap[child - 1];
					UnHeap[child - 1] = temp;
					j = child - 1;
				}
				else 
					break;
			}
			else
			{
				if (UnHeap[j] < UnHeap[child])
				{
					temp = UnHeap[j];
					UnHeap[j] = UnHeap[child];
					UnHeap[child] = temp;
					j = child;
				}
				else
					break;
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	

	SingleHeap(arr, n);
	printAll(arr, n);
	cout << endl;
	
	Heap(arr, n);
	n -= 3;
	printAll(arr, n);

	system("pause");
	return 0;
}