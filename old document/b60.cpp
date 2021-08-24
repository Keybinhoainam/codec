#include<iostream>
using namespace std;
long long tongchuso(long long n)
{
	long long tong=0;
	while(n>0)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
long long sochuso(long long n)
{
	long long dem=0;
	while(n>0)
	{
		dem++;
		n/=10;
	}
	return dem;
}
void kt(long long n,long long s)
{
	if(s==1)cout<<n;
	else
	{
		long long n1=tongchuso(n);
		s=sochuso(n);
		kt(n1,s);
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		kt(n,sochuso(n));
		cout<<endl;
	}
}

