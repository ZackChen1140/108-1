#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int t = sqrt(n);
		int x, y;
		if (t % 2 == 1)
		{
			if (pow(t, 2) < n)
			{
				y = t+1;
				x = n - pow(t, 2);
				if ((n - pow(t, 2)) > t + 1)
				{
					y -= (n - pow(t, 2) - t - 1);
					x = t + 1;
				}
			}
			else
			{
				x = 1;
				y = t;
			}
		}
		if (t % 2 == 0)
		{
			if (pow(t, 2) < n)
			{
				x= t + 1;
				y = n - pow(t, 2);
				if ((n - pow(t, 2)) > t + 1)
				{
					x -= (n - pow(t, 2) - t - 1);
					y = t + 1;
				}
			}
			else
			{
				y = 1;
				x = t;
			}
		}
		cout << x << " " << y << endl;
	}
	return 0;
}