#include<iostream>
using namespace std;
//2015-12-01, HJB, bsearch
int main()
{
	int num;
	cin >> num;
 
	int * table = new int[num];
	for(int i=0; i<num; i++)
		cin >> table[i];
 

	int key;
	cin >> key;
 
	int low = 0, high = num-1, mid = (low+high)/2;
	for(low; low<=high;)
	{
		if(table[mid] == key)
		{
			cout << mid+1 << endl;
			return 0;
		}
		else
		{
			(table[mid] > key) ? (high = mid-1) : (low = mid+1);
			mid = (low+high)/2;
		}	
	}
	cout << "not found" << endl;
	return 0;
}