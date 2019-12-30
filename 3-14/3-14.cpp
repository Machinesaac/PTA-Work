#include <iostream>
using namespace std;
int main()
{
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	int s=0;
	cin >> year >> month >> day;
	if (!(year%400))
  {
		arr[1] = 29;
	}
	for  (int i=0;i<month-1;i++)
  {
		s += arr[i];
	}
	s += day;
	cout << s;
  }
