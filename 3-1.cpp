#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int temp;
    cin >> temp;
    cout << "c=" << setiosflags(ios::fixed)<< setprecision(2)<< (temp-32)/1.8 << endl;
	return 0; 
	
}
