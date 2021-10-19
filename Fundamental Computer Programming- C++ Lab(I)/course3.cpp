#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	while (cin >> n)
	{
		if(n=="0")break;
		int k = 0, a=0, b=0, i=0,z=n.length();//k奇數位減偶數位的值,a 
		for(i=z-1;i>=0;i--)
		{
			char x=n[i];
			int y=(int)x-48;
			if(i%2==1)
			{
				a+=y;
			}
			else
			{
				b+=y;
			}
		}
		k=(b-a);
		if (k % 11 == 0)
		{
			cout << n << "  is a multiple of 11." << endl;
		}
		else
		{
			cout << n << "  is not a multiple of 11." << endl;
		}
	}
	return 0;
}
