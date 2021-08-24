#include<iostream>
using namespace std;
long long power(long long x,long long y,long long m)
{
	if(y==0)return 1;
	long long t=power(x,y/2,m);
	if(y%2==0)return (t%m*t%m)%m;
	else return ((t%m*t%m)%m*x%m)%m;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long x,y,m;
		cin>>x>>y>>m;
		cout<<power(x,y,m)<<endl;
	}
}

