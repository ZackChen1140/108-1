#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a, b;
	while (getline(cin,a),getline(cin,b))
	{
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		string x;
		for (int i = 0, j = 0; i < a.length() && j < b.length();)
		{
			if (a[i] == b[j]&&a[i]>96&&b[j]>96)
			{
				x += a[i];
				i++;
				j++;
			}
			else if (a[i] > b[j])
				j++;
			else
				i++;
		}
		cout << x << endl;
	}
	return 0;
}