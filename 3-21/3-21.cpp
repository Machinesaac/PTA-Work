#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int a,n,tmp = 0,sn=0;
    scanf("a=%d,n=%d",&a,&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<i+1;j++)
		{
			tmp += a * pow(10,j);
		}
		sn += tmp;
		tmp = 0;
	}
	
	cout << sn;
}
