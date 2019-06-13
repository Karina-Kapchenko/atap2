#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	int arr[t];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	for (int j = 0; j < t; ++j)
	{
		cin >> arr[j];
	}


	for(int b = 0; b < t; b++)
	{
		int l = 0, r = n - 1;
		int res1 = -1;
		int res2 = -1;
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (a[m] == arr[b])
			{
				res1 = m;
				r = m - 1;
			}
			else if (a[m] > arr[b])
			{
				r = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
		
		l = 0, r = n - 1;
		
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (a[m] == arr[b])
			{
				res2 = m;
				l = m + 1;
			}
			else if (a[m] > arr[b])
			{
				r = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
		if (res1 != -1 && res2 != -1)
		{
			res1++;
			res2++;
			cout << res1 << " " << res2 << endl;
		}
		else
		{
			cout << "0";
			cout << endl;
		}
		
	}	
	
}
