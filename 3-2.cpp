#include <iostream> 
using namespace std;
int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int time;
	int grade;
	cin >> time;
    for (int i= 0;i<time;i++){
    	cin >> grade;
    	if (grade>=90){
    		a++;
		}
		if (grade>=80&&grade<90){
			b++;
		}
		if (grade>=70&&grade<80){
			c++;
		}
		if (grade>=60&&grade<70){
			d++;
		}
		if (grade<60){
			e++;
		}
	}
		

	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
	return 0;	
}

