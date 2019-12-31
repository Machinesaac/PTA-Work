#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,tmp = 0,sn=0;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<i+1;j++)
		{
			tmp += 6 * pow(10,j);
		}
		sn += tmp;
		tmp = 0;
	}
	
	cout << sn;
}
