#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i=0;i<=n;i++)
	{
			if ((2 * i + 4 * (n-i))== m)
			{
				cout << i << ' ' << n-i;
				return 0;
			}
   }
   cout << "no answear";
}
