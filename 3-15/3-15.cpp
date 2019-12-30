#include <iostream>
using namespace std;
int main(){

	int year;
	cin >> year;
	if ((!(year%400))|year==1904)
    {
		cout << "yes";
	}
	else
    {
		cout << "no";
	}
}
