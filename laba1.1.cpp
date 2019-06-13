#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int x;
	int count = 0;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n ; i++)
	{
		cin >> x;
		vec[i] = x;
	}
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (x == vec[i])
		{
			count++;
		}
	}
	cout << count;
}

