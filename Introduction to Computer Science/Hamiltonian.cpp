#include<iostream>
#include<string>
using namespace std;

int main()
{
	int node,frame;
	char a,b;
	while(cin>>node>>frame>>a)
	{
		string n,s,u,t,o,e;
		for(int i=1;i<=2*frame;i++)
		{
			cin>>b;
			e+=b;
			
		}
		for(int i=0;i<e.length();i+=2)
		{
			if(e[i]==a||e[i+1]==a)
			{
					if(e[i]==a)
					{
						s+=e[i];
						s+=e[i+1];
					}
					else
					{
						s+=e[i+1];
						s+=e[i];
					}
			} 
			else
			{
					n+=e[i];
					n+=e[i+1];
			}
		}
		int q=0;
		for(int i=0;i<s.length();i+=2)
		{
			int j=0;
			if(t.length()<node&&q<n.length())
			{
				i-=2;
				q+=1;
				j=q;
			}
			else
			{
				q=0;
			}
			int tof=1;
			t=s[i];
			t+=s[i+1];
			for(;j<n.length();)
			{	
				int p=t.length();
				if(n[j]==t[p-1])
				{
					if(j%2==0)
					{
						for(int k=1;k<p;k++)
						{
							if(n[j+1]==t[k])
							{
								tof=1;
								j++;
								break;
							}
							else
							{
								tof=0;
							}
						}
						if(tof==0)
							t+=n[j+1];	
					}
					else
					{
						for(int k=1;k<p;k++)
						{
							if(n[j-1]==t[k])
							{
								tof=1;
								j++;
								break;
							}
							else
							{
								tof=0;
							}
						}
						if(tof==0)
							t+=n[j-1];
					}
				}
				else
				{
					j++;
				}
				if(p==node)
				{
					t+=a;
					break;
				}
				if(j==n.length()-1&&t!=o)
				{
					j=0;
					o=t;
				}
			}
			if(t.length()==node+1)
				cout<<t<<endl;
		}
		
		
	}
}
