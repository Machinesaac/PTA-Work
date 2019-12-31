#include <iostream>
#include <cmath>
using namespace std;
bool Jud(int a)
{
	for (int k=2;k<sqrt(a);k++)
	{
		if (a % k == 0)
		   return false;
	}
	return true;
}
int main()
{
	int x;
	cin >> x;
	for (int i=2;i<x;i++)
	{
		for (int j=2;j<x;j++)
		{
			if (i+j==x&&Jud(i)&&Jud(j))
			{
				cout << x << " = " << i << " + " << j;
				return 0;
			}
		}
	}
}
