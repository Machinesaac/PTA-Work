#include <iostream> 
using namespace std;
int main(){
	int a,b,c,d,e=0;
	int time, grade;
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

