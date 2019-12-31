#include <iostream>
using namespace std;
int main()
{
	int n,big,key;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
    big = arr[0];
    key = 0;
	for (int i=1;i<n;i++)
	{
		if (arr[i] > big)
		{
			big = arr[i];
			key = i;
		}
	}
	
	cout << big << ' ' << key;
}
