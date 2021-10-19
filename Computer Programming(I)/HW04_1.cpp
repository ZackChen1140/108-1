#include<iostream>

using namespace std;

int main()
{
	int step,mod;
	while(cin>>step>>mod)
	{
		int a=step;
		int b=mod;
		int c=0;
		int d=0;
		while(a>0)
		{
			c+=1;
			a/=10;
		}
		while(b>0)
		{
			d+=1;
			b/=10;
		}
		for(int i=1;i<=10-c;i++)
		{
			cout<<" ";
		}
		cout<<step;
		for(int i=1;i<=10-d;i++)
		{
			cout<<" ";
		}
		cout<<mod;
		cout<<"    ";
		for(int k=step;k>0;k--)
		{
			if(step%k==0&&mod%k==0)
				if(k==1)
					cout<<"Good Choice"<<endl;
				else
				{
					cout<<"Bad Choice"<<endl;
					break;
				}
		}
	}
	return 0;
} 
