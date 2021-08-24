#include<iostream>
#include<string.h>
using namespace std;
long long x,dem;
int nt(long long n)
{
	if(n==0)return 0;
	if(n==1)return 0;
 	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;

}
int kt(long long n1,long long n2)
{
	while(n1!=n2)
	{
		if(n1>n2)n1-=n2;
		if(n1<n2)n2-=n1;
	}
	if(n1==1)return 1;
	else return 0;

}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		dem=0;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			if(kt(i,x)==1)dem++;
		}
		if(nt(dem)==1)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

