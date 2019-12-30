#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,p,yu,s=0;
	char sign;
	cin >> x >> sign;
    for (int n=1;n<=1000;n++)
	{
		s = 2*pow(n,2) - 1; //奇数等差数列求和公式：n^2,沙漏总和还需要乘上2后减1； 
		if (s > x)
		{
			p = n - 1;
			s = 2*pow(n-1,2) - 1;
			yu = x - s;
			break;
		}
	} 
	for (int t=0;t<p;t++){
			
		for (int i=0;i<t;i++){
				  cout << " ";
		}
		for (int i=0;i<2*(p-t)-1;i++){
				  cout << sign;
				
		}
		 cout << "\n";
	}
	
	for (int t=0;t<p-1;t++){
			
		for (int i=0;i<p-t-2;i++){
				  cout << " ";
		}
		for (int i=0;i<2*(t+2)-1;i++){
				  cout << sign;
				
		}
		 cout << "\n";
	}
	cout << yu;
			
} 
