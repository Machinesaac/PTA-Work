#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
	cout << "[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n";
	double arr[5] = {3,2.5,4.1,10.2};
	int input;
	for (int i = 0; i < 5; i++){
		cin >> input ;
		if (input == 0){
			return 0;
		}
		cout << "price = "<< setiosflags(ios::fixed) << setprecision(2) << arr[input - 1];
	}
	return 0;
	
}
