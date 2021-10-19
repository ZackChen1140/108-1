#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int p=1;
		int c=0;
		while(p<n)
		{
			c+=1;
			if(c%2==1)
				p*=9;
			else
				p*=2;
		}
		if(c%2==1)
			cout<<"Stan wins."<<endl;
		else
			cout<<"Ollie wins."<<endl;
	}
	return 0;
}
