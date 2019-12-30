#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int N,e,flag;
	scanf("%d",&N);
	while(N--)
	{	
		flag=0;
		scanf("%d",&e);
		if(e>1)
		flag=1;
		for(int i=2;i<=sqrt(e);i++)
		if(e%i==0)
		{
			flag=0;
			break;
		}
		if(flag||e==2)
		 printf("Yes\n"); 
		else
		printf("No\n"); 
	}
	return 0;
}
