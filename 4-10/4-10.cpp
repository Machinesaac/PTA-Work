#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct STU
{
	string name;
	double a, b, c;
	double ava; 
	int index;
};
int main()
{
	int n,tmp;
	string name;
	cin >> n;
	struct  STU stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].a >> stu[i].b >> stu[i].c;
		stu[i].ava = (stu[i].a + stu[i].b + stu[i].c) / 3;
        tmp = (int)(stu[i].ava * 100 + 0.5);
        stu[i].ava = ((float)tmp / 100);
		stu[i].index = i;
	}
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < n -i-1; j++)
		{
			if (stu[j].ava > stu[j + 1].ava || ((int)stu[j].ava * 100 == (int)stu[j + 1].ava*100 && (int)stu[j].index > (int)stu[j + 1].index))
			{
				swap(stu[j],stu[j+1]);
			}
		}
	for (int i = 0; i < n; i++)
	{
		cout << stu[n-1-i].name << ' ' <<setiosflags(ios::fixed)<<setprecision(2)<<stu[n-1-i].ava<<endl;
	}
}
