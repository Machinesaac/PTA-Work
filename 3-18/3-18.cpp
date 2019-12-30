
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int h, n;
    double s, nh;
    int cnt;

    cin >> h >> n;
    s = h;
    nh = h / 2.0;
    cnt = 1;
    if (n>0){
    while(n > cnt)
    {
        cnt++;
        s += 2.0 * nh;
        nh /= 2.0;
    }
    }
    else{
        nh = 0;
        s = 0;
    }

    cout <<  fixed << setprecision(1);
    cout << s << " " << nh << endl;

    return 0;
}
