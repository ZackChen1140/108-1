#include<iostream>

using namespace std;

int main()
{
	int n;
	int i=1;
	while(cin>>n)
	{
		if(n==0)
			break;
		int b=0;
		int d=0;
		int c;
		int j=0;
		int k=0;
		int s;
		int t=0;
		cout<<"Output for data set "<<i<<", "<<n<<" bytes:"<<endl;
		while(cin>>c)
		{
			b+=c;
			j+=1;
			k+=1;
			t+=c;
			if(j==5)
			{
				if(b==0)
					cout<<"   Time remaining: stalled"<<endl;
				else
				{
					if((n-b-d)%(b/5)==0)
						s=(n-b-d)/(b/5);
					else
						s=(n-b-d)/(b/5)+1;
					cout<<"   Time remaining: "<<s<<" seconds"<<endl;
				}
				j=0;
				d+=b;
				b=0;
			}
			if(t==n)
			{
				cout<<"Total time: "<<k<<" seconds"<<endl<<endl;
				k=0;
				break;
			}
		}
		i++;
	}
	return 0;
}
