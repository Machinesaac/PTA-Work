#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m = 0, n = 0, x,k=1;
	cin >> x;
	int times = x;
	int a[x][x];
	while (k<=pow(x,2))
	{
		while (n < times)
		{
			a[m][n] = k;
			k++;
			n++;
		}
		n--;
		m++;
		while (m < times)
		{
			a[m][n] = k;
			k++;
			m++;
		}
		m--;
		n--;
		while (n >= (x - times))
		{
			a[m][n] = k;
			k++;
			n--;
		}
		times = times - 1;
		n++;
		m--;
		while (m >=(x-times))
		{
			a[m][n] = k;
			k++;
			m--;
		}
		m++;
		n++;
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (a[i][j] < 10)
			   cout << "  "<<a[i][j];
			else
			   cout <<' '<< a[i][j];
			if (j == x - 1)
			{
				cout << endl;
			}
		}
	}
} //I totally don't understand what i was doing when i see this shit agian...... 
  //2019/12/31
