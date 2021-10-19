#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	while(cin>>n)
	{
		int sum=10;
		while(sum>=10)
		{
			sum=0;
			int nl=n.length();
			for(int i=nl-1;i>=0;i--)
			{
				char x=n[i];
				int z=(int)x-48;
				sum+=z;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
