#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n, s;
	while (cin >> n)
	{
		int arr[3001] = {};
		int arr2[3001] = {};
		int v = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			arr[i] = s;
		}
		for (int j = 0; j < n - 1; j++)
		{
			if (abs((float)arr[j]-(float)arr[j+1])>n-1)
			{
				v = 0;
				break;
			}
		}
		if (v)
		{
			for (int k = 0; k < n - 1; k++)
			{
				arr2[k] = abs((float)arr[k] - (float)arr[k + 1]);
			}
			sort(&arr2[0], &arr2[n-1]);
			if (arr2[0] == 1)
			{
				for (int l = 0; l < n - 2; l++)
				{
					if (arr2[l + 1] - arr2[l] != 1)
					{
						v = 0;
						break;
					}
				}
			}
			else
				v = 0;
		}
		if (n == 1)
			v = 1;
		if (v)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}