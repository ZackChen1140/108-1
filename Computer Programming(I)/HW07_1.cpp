#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string a, b;
	int z = 0;
	while (cin >> a)
	{
		if (a == "#")
			break;
		z++;
		cin >> b;
		int x[101][101];
		x[0][0] = 0;
		for (int j = 1; j <= b.length(); j++)
		{
			x[0][j] = 0;
		}
		for (int i = 1; i <= a.length(); i++)
		{
			x[i][0] = 0;
			for (int j = 1; j <= b.length(); j++)
			{
				if (a[i - 1] == b[j - 1])
					x[i][j] = x[i - 1][j - 1] + 1;
				else
					x[i][j] = max(x[i - 1][j], x[i][j - 1]);
			}
		}
		cout << "Case #" << z << ": you can visit at most " << x[a.length()][b.length()] << " cities." << endl;
	}
}