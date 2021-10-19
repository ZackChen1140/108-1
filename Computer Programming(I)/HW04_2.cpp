#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		cout<<"Printing order for "<<n<<" pages:"<<endl;
		int a,b,c,d;
			if(n%4==3)
			{
				if(n>4)
				{
					cout<<"Sheet 1, front: Blank, 1"<<endl<<"Sheet 1, back : 2, "<<n<<endl;
					b=n;
					c=b-1;
					d=c-1;
				}
				else
					cout<<"Sheet 1, front: Blank, 1"<<endl<<"Sheet 1, back : 2, 3"<<endl;
			}
			else if(n%4==2)
			{
				cout<<"Sheet 1, front: Blank, 1"<<endl<<"Sheet 1, back : 2, Blank"<<endl;
				c=n;
				d=c-1;
			}
			else if(n%4==1)
			{
				if(n>4)
					cout<<"Sheet 1, front: Blank, 1"<<endl<<"Sheet 1, back : 2, Blank"<<endl;
				else
					cout<<"Sheet 1, front: Blank, 1"<<endl;		
			}
			else if(n%4==0)
			{
				if(n>4)
				{
					cout<<"Sheet 1, front: "<<n<<", 1"<<endl<<"Sheet 1, back : 2, "<<n-1<<endl;
					a=n;
					b=a-1;
					c=b-1;
					d=c-1;
				}
				else
					cout<<"Sheet 1, front: 4, 1"<<endl<<"Sheet 1, back : 2, 3"<<endl;
			}
			if(n>4)
			{
				if(n%4==1)
				{
					cout<<"Sheet 2, front: Blank, 3"<<endl<<"Sheet 2, back : 4, "<<n<<endl;
					d=n;
				}
				else
				{
					cout<<"Sheet 2, front: "<<c<<", 3"<<endl<<"Sheet 2, back : 4, "<<d<<endl;
				}
			}
		for(int i=3;i<=(n/4+1);i++)
		{
			if(n%4==0&&i==(n/4+1))
				break;
			cout<<"Sheet "<<i<<", front: "<<(d+1)-(i-2)*2<<", "<<3+(i-2)*2<<endl;
			cout<<"Sheet "<<i<<", back : "<<4+(i-2)*2<<", "<<d-(i-2)*2<<endl;			
		}
	}
	return 0;
}
