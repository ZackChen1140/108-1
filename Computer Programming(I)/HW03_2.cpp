#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n!=0)
		{
			int amp,fre;
			for(int h=0;h<n;h++)
			{
				cin>>amp>>fre;
				if(amp!=0&&fre!=0&&amp<10)
				{
					if(h!=0)
						cout<<endl;
					for(int i=1;i<=fre;i++)
					{
						int j;
						for(j=1;j<=amp;j++)
						{
							for(int k=1;k<=j;k++)
							{
								cout<<j;
							}
							cout<<endl;
						}
						for(j=amp-1;j>0;j--)
						{
							for(int k=1;k<=j;k++)
							{
								cout<<j;
							}
							cout<<endl;
						}
						if(i!=fre)
							cout<<endl;
					}
				}
			}
		}
	}
	return 0;
} 
