#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int s;
	string u;
	while(cin>>s>>u)
	{
		char r=','; 
		string n=u+r;//u後面加逗號 
		for(int i=0;i<=n.length();i++) //i=n的位置 
		{
			char x=n[i];
			char y=n[i-1];
			char z=n[i-2];
			int yt=(int)y-48; //y字元的整數值 
			int zt=(int)z-48; //z字元的整數值
			int m;//題目的p 
			int q;//用來表示p是否為質數,是q=1 
			if(x==',')
			{
				if(z==','||(i-1)==0)
				{ 
					m=yt;
				} 
				else
				{ 
					m=yt+10*zt;	
				} 
				double o=pow(2,m)-1;//o=2^p-1 
				if(m<2)
				{
					cout<<"No"<<endl;
				}
				else if(m==2)
				{
					cout<<"Yes"<<endl;
				}
					else
					{
						for(int j=2;j<m;j++)//j用來判斷m是否為質數 
						{
							if(m%j==0&&m!=2)
							{
								cout<<"No"<<endl;
								q=0;//m不是質數 
								break;
							}
							else if(m==2 || m==j+1)
							{
								q=1;//m是質數
							}
						}
						for(double k=2;k<o;k++)//k用來判斷o是否為質數 
						{
							if(q==0)
								break;
							if((int)o%(int)k==0 && o!=2)
							{
								cout<<"No"<<endl;
								break;
							}
							else if(o==k+1 && q==1)
								cout<<"Yes"<<endl;
						}
					}
			}
		}
	}
	return 0;
}

