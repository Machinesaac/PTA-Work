#include <iostream>
using namespace std;
int main()
{
	int n,big,min,key_big,key_min;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	big = min = arr[0];
	key_min = key_big = 0;
	for (int i=1;i<n;i++)
	{
		if (arr[i]<min)
		{
			min = arr[i];
			key_min = i;
		}
		if (arr[i] > big)
		{
			big = arr[i];
			key_big = i;
		}
	}
	if (key_big==0&&key_min==n-1)
	{
		swap(arr[0],arr[n-1]);
	}
	else{
	
	if (key_big==0||key_min==n-1)
	{
		if (key_big == 0)
		{
		    swap(arr[key_big],arr[n-1]);
		    swap(arr[key_min],arr[0]);
	    }
	    else
	    {
	    	swap(arr[key_min],arr[0]);
	    	swap(arr[key_big],arr[n-1]);
		}
	}
	else{
	swap(arr[key_min],arr[0]);
	swap(arr[key_big],arr[n-1]);
    }
    }  
	
	for (int i=0;i<n;i++)
	{
		cout << arr[i] << ' ';
	}
	
} 
