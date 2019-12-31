#include <iostream>
#include <vector>
using namespace std;
bool Judge(int N,vector<int> arr)
{
	int s1=0;
	for (int i=0;i<N;i++)
	{
		s1 = s1 + arr[i];
	}
	if (s1 == N-1) return true;
	else return false;
}
int main()
{
	int N,s=0,k=1,c=1;
	cin >> N;
	vector< vector<int> > vec(N);
	vector<int> num(N);
	vector<int> count(N,0);
	vector<int> arr(N,0);
	//vector< vector<int> > vec(10, vector<int>(5));
    /*if (N == 1)
    {
    for (int i = 0; i < N; i++)
	{
		cout << '#' << i + 1;
		cout << endl;
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j];
			if ((j+1)% 10 == 0)
			{
				cout << endl;
			}
			else
			   cout << ' ';
		}
	}
	}
	*/
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		s += n * 10;;
		vec[i] = vector<int>(n*10,0);
		num[i] = n*10;

	}
	while (c <= s)
	{
		for (int i = 0; i < N; i++)
		{
			if (count[i] < num[i])
			{
				if (Judge(N,arr)||N==1)
				{
					if (N==1) vec[i][count[i]] = k++;
					
					else vec[i][count[i]] = ++k;
				    count[i] += 1;;
				    k++;
				    c++;
				}
				else
				{
				    vec[i][count[i]] = k;
				    count[i] += 1;;
				    k++;
				    c++;
			    }
			}
			else 
			{
			    arr[i] = 1;
		    }
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << '#' << i + 1;
		cout << endl;
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j];
			if ((j+1)% 10 == 0)
			{
				cout << endl;
			}
			else
			   cout << ' ';
		}
	}
	return 0;
}
