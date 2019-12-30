#include <iostream>
using namespace std;
int main(){
	int num, line;
	cin >> num;
	line = (num + 1) / 2;
	for (int i=0; i<=line-1; i++){
		for (int a=0;a<2*(line-1-i);a++){
			cout << " ";
		}
		for (int b=0;b<2*(i+1)-1;b++){
			cout << "* ";
		}
		
		cout << "\n";		
	}
	for (int i=0; i<line-1;i++){
		for (int a=0;a<2*(i+1);a++){
			cout << " ";
		}
		for (int b=0;b<2*(line-i-1)-1;b++){
			cout << "* ";
			
		}
		cout << "\n";
	}
	
	
} 
