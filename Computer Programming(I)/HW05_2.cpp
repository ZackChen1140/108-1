#include<iostream>

using namespace std;

int main()
{
	int h,u,d,f;
	while(cin>>h>>u>>d>>f)
	{
		if(h==0&&u==0&&d==0&&f==0)
			break;
		float c=0;
		int day=0;
		int i=0;
		while(c>=0&&c<=h)
		{
			day+=1;
			float ft=(float)u*(float)f/100*(float)i;
			i+=1;
			if(u-ft>=0)
				c=c+u-ft;
			if(c<=h)
				c=c-d;
		}
		if(c>=h)
			cout<<"success on day "<<day<<endl;
		else
			cout<<"failure on day "<<day<<endl;
	}
	return 0;
}
