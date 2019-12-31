#include <iostream>
using namespace std;
int Fab(int n)
{
    if (n==1) return 1;
    else 
    return n * Fab(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << Fab(n);
    }
