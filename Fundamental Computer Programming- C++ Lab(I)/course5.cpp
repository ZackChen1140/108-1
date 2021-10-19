#include<iostream>
#include<string>
using namespace std;

int main()
{
	string n;
	while(cin>>n)
	{
		int e=0;
		int f=0;
		int g=0;
		for(int i=n.length()/2-1;i>=0;i--)
		{
			char a=n[i];
			int c=(int)a-48;
			char b=n[2*n.length()/2-1];
			int d=(int)b-48;
			g+=(c+d)
			if(c+d>=10)
			{
				e=1;
				f+=1;
			}
			else
			{
				e=0;
			}
		}
		if(g==0)
			break;
		if(f==0)
			cout<<"No carry operation"<<endl;
		if(f>0&&f<=1)
			cout<<f<<" carry operation"<<endl;
		if(f>1)
			cout<<f<<" carry operations"<<endl;
			
	}
	
}
