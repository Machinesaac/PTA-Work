#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i=100;i<1000;i++)
	{
		int x,s=0;
		x = i;
		for (int j=0;j<3;j++)
		{
			s += pow(x % 10,3);
			x /= 10;
		}
		if (s==i)
		   cout << i << endl;
	}
}
