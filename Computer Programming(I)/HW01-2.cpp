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
		string n=u+r;//u�᭱�[�r�� 
		for(int i=0;i<=n.length();i++) //i=n����m 
		{
			char x=n[i];
			char y=n[i-1];
			char z=n[i-2];
			int yt=(int)y-48; //y�r������ƭ� 
			int zt=(int)z-48; //z�r������ƭ�
			int m;//�D�ت�p 
			int q;//�ΨӪ��p�O�_�����,�Oq=1 
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
						for(int j=2;j<m;j++)//j�ΨӧP�_m�O�_����� 
						{
							if(m%j==0&&m!=2)
							{
								cout<<"No"<<endl;
								q=0;//m���O��� 
								break;
							}
							else if(m==2 || m==j+1)
							{
								q=1;//m�O���
							}
						}
						for(double k=2;k<o;k++)//k�ΨӧP�_o�O�_����� 
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

