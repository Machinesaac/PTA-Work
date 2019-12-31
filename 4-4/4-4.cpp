#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
	double x,y,s=1,fact=1;
	cin >> x;
		for (int i=1;;i++)
		{
			fact *= i;
			y = pow(x, i)/fact;
			s += y;
			if (fabs(y)<0.00001)
			    break;
		}
	printf("%.4f\n",s);
}
