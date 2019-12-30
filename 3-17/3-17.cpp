#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,n,p;
	cin >> a >> b >> n;
	for (int i=0;i<n;i++)
	{
		p = a * 10 / b;
		a = (a*10) % b;
	}
	cout << p;
} 
