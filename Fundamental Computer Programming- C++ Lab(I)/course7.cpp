#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int count=0;
		if(a==0&&b==0)
			break;
		for(int i=1;i<=b;i++)
		{
			if(pow(i,2)>=a&&pow(i,2)<=b)
				count+=1;
		}
		cout<<count<<endl;
	}
	return 0;
}
