#include <iostream>
#include <vector>
using namespace std;
  int main()
{
	int m, n,num=0;
	cin >> m >> n;
	for (int i = m; i <=n; i++)
	{
		int  index = 0, s = 0;
		vector<int>  arr(i, 0);
		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				arr[index] = j;
				s += j;
				index++;
			}
		}
		if (i == s)
		{
			cout << i << " = ";
			for (int x = 0; x < index; x++)
			{
				cout << arr[x];
				if (x!=index-1)
				     cout << " + ";
			}
            num++;
			cout << endl;
		}
	}
        if(num==0)
		{
			cout << "None";
		}
}
