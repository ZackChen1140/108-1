#include<iostream>
#include<string>

using namespace std;

int main()
{
	int p;
	while (cin >> p)
	{
		if (p == 0)
			break;
		int i;
		int q = p;
		for (i = 1; i <= q; i++)
		{
			int n = i;
			do
			{
				if (n % 2 == 0)
					n /= 2;
				if (n % 3 == 0)
					n /= 3;
				if (n % 5 == 0)
					n /= 5;
			} while (n % 2 == 0 || n % 3 == 0 || n % 5 == 0);
			if (n != 1)
				q += 1;
		}
		cout << "The " << p << "'th ugly number is " << q << "." << \n;
	}
}
