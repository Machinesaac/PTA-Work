#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n = 0,sum = 1,  c, s;
	int a = 0, b = 0;
	cin >> x;
	int d=0;
	while (d != 495)
	{
		int arr[3],index = 0;
		for (int i = x; i != 0; i = i / 10)
		{
			s = i % 10;
			arr[index] = s;
			index++;
		}
		for (int i = 1; i < 3; i++)
		{
			for (int j = i - 1; j >= 0 && arr[j + 1] < arr[j]; j--)
			{
				swap(arr[j], arr[j + 1]);
			}
		}


		for (int i = 0; i < 3; i++)
		{
			a += arr[i] * pow(10, i);
			b += arr[2 - i] * pow(10, i);

		}

		d = a - b;
		cout << sum << ": " << a << " - " << b << " = " << d << endl;
		if (d == 0)
		{
			return 0;
		}
		x = d;
		a = 0;
		b = 0;
		c = 0;
		n = 0;
		sum++;
	}

}
