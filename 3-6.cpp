#include <iostream> 
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
	string arr;
	int len;
	int s;
    cin >> arr;
    len = arr.length();
    cout << len<<" ";
    for (int i=0;i<len;i++){
    	s += (int)arr[i] - 48;
	}
	cout << s << endl;
	return 0;
	
}
