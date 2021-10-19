#include<iostream>

using namespace std;

int main()
{
	long long n,all;
	long long sum;
	while(cin>>n)
	{
		all=(n+1)*(n+1)/2/2;
		sum=3+2*(all-1)+2*(all-2)+2*(all-3);
		cout<<sum<<endl;
	}
	return 0;
} 
