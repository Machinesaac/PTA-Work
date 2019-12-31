#include <iostream>
#include <cmath>
using namespace std;
bool Su(int x)
{
	for (int i=2;i<=sqrt(x);i++)
	{
		if (x%i == 0)
		{
		   return false;
		}	
	}
	return true;
}
bool Su2(int num)
{
	if (num == 2 || num == 3)
        return 1;
    //不在6的倍数两侧的一定不是质数
    if (num % 6 != 1 && num % 6 != 5)
        return 0;
    double sqrtnum = sqrt(num*1.0);
    //在6的倍数两侧的也可能不是质数
    for (int i = 5; i <= sqrtnum; i += 6)
        if (num %i == 0 || num % (i + 2) == 0)
            return 0;
    //排除所有，剩余的是质数
    return 1;
}
int main(){
	int arr[100],c=0;
	for (int i=0;i<100;i++)
	{
		cin >> arr[i];
		if (arr[i]==0) break;
		c++;
	}
	for (int j=0;j<c;j++)
	{
		int s=0;
	    for (int i=2;i<=arr[j]/2;i++)
	    {
		    if (Su(i)&&Su(arr[j]-i))
		    {
			    s ++;
		    }
	    }
	    cout << s << endl;
    }
}
