#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double x,s;
	cin >> x;
	if (x==0){
		s = x;
	}
	else{
		s = 1/x;
	}
	cout << "f("<< setiosflags(ios::fixed)<<setprecision(1) << x <<") = "<< setiosflags(ios::fixed)<<setprecision(1)<<s;
} 
