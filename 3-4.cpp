#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
	double mon;
	int age;
	int time;
	cin >> age >> time;
	if (age<5){
		if (time<=40){
			mon = 30 * time; 
		}
		else{
			mon = 30 * 40 + (time - 40) * 30 * 1.5;
		}
	}
	if (age>=5){
		if (time<=40){
		mon = 50 * time ;
	}
		
		else{
			mon = 50 * 40 + 50 * 1.5 * (time - 40);
		
	}
	} 
	cout << setiosflags(ios::fixed) << setprecision(2) << mon;
	return 0;
	}
	
 
