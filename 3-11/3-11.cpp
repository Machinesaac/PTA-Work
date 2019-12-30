#include <iostream>
using namespace std;
int main(){
	int N,S,s;
	cin >> N; //N<10
	for (int i=1;i<=N;i++){
		s = 1;
		for (int a=1;a<=i;a++){
			s *= a;
		}
			S += s;
		}
	cout << S;
}
