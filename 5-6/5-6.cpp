#include <iostream>
#include <iomanip>
using namespace std;
int y = 2000, m = 0, d = 1, w = 0, t1 = 0, t2 = 0, days = 1, i = 0;
string week;
int mon1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int mon2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int main() {
	while (cin >> days && days != -1) {
		t1 = days;
		for (int i = 1;;i++) {
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
				t1 -= 366;
				if (t1 < 0) {
					t1 += 366;break;
				}
				y++;
				if (y > 9999)exit(0);
			}
			else
				{
				t1 -= 365;
				if (t1 < 0) {
					t1 += 365;break;
				}
				y++;
				if (y > 9999)exit(0);
				}
		}
		t2 = t1;
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			for (i = 0;;i++) {
				if (t2 - mon2[i] < 0)break;
				t2 -= mon2[i];
			}
		else
			for (i = 0;;i++) {
				if (t2 - mon1[i] < 0)break;
				t2 -= mon1[i];
			}
		m = i + 1;
		d = t2 + 1;
		w = days % 7;
		switch (w) {
		case 1: week = "Sunday";break;
		case 2: week = "Monday";break;
		case 3: week = "Tuesday";break;
		case 4: week = "Wednesday";break;
		case 5: week = "Thursday";break;
		case 6: week = "Friday";break;
		case 0: week = "Saturday";break;
		}
		cout << y << '-';
		cout << setw(2) << setfill('0') << m << '-' << setw(2) << setfill('0') << d << ' ';
		cout << week << endl;
		y = 2000; m = 0; d = 1; w = 0; t1 = 0; t2 = 0; days = 1;
	}
	return 0;
}
