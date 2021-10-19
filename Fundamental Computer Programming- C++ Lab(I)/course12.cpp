#include <iostream>
#include <string>
using namespace std;
int main()
{
	int in1;
	while (cin >> in1)
	{
		int sum = 0;
		string cs1 = ""; 

		if (in1 == 0)
		{
			break;
		}

		while (in1 > 0)
		{           
			if (in1 % 2 == 1) 
			{
				cs1 = "1" + cs1; 
				sum = sum + 1;
			}

			else
			{
				cs1 = "0" + cs1;
			}

			in1 = in1 / 2;
		}

		cout << "The parity of " << cs1 << " is " << sum << " (mod 2)." << endl;//¿é¥X 
	}
	return 0;
}