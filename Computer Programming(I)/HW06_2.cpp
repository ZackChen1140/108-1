#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	char a[13] = { '=','-','0','9','8','7','6','5','4','3','2','1','`' };
	char b[13] = { '\\',']','[','P','O','I','U','Y','T','R','E','W','Q' };
	char c[11] = { '\'',';','L','K','J','H','G','F','D','S','A' };
	char d[10] = { '/','.',',','M','N','B','V','C','X','Z' };
	while (getline(cin, n))
	{
		for (int h = 0; h < n.length(); h++)
		{
			for (int i = 0; i < 14; i++)
			{
				if (n[h] == a[i])
					cout << a[i + 1];
				if (n[h] == b[i])
					cout << b[i + 1];
				if (n[h] == c[i])
					cout << c[i + 1];
				if (n[h] == d[i])
					cout << d[i + 1];
			}
			if (n[h] == ' ')
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}