#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << n << " " << m << endl;
		if (n == 0 && m == 0)
			break;
		int a[10001] = {};
		for (int i = 0; i < 10001; i++)
		{
			a[i] = { 0 };
		}
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n-1;i++)
		{
			if (a[i] % m > a[i + 1] % m)
			{
				swap(a[i], a[i + 1]);
				i = -1;
			}
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] % m== a[i + 1] % m)
			{
				if (a[i] % 2 == 0 && a[i + 1] % 2 == 1)
				{
					swap(a[i], a[i + 1]);
					i = -1;
				}
				else if (a[i] % 2 == 1 && a[i + 1] % 2 == 1)
				{
					if (a[i + 1] > a[i])
					{
						swap(a[i], a[i + 1]);
						i = -1;
					}
				}
				else if (a[i] % 2 == 0 && a[i + 1] % 2 == 0)
				{
					if (a[i + 1] < a[i])
					{
						swap(a[i], a[i + 1]);
						i = -1;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}
	}
}