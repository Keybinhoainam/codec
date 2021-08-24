#include<bits/stdc++.h>
using namespace std;
long long modulo(string a,long long m)
{
	long long tong=0;
	for(int i=0;i<a.length();i++)
	{
		tong=(tong*10+(int)(a[i]-'0'))%m;
	}
	return tong;
}
long long power(long long t,long long b,long long m)
{
	if(b==1)return t;
	long long u=power(t,b/2,m);
	if(b%2==0)return (u%m*u%m)%m;
	else return ((u%m*u%m)%m*t%m)%m;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string a;
		long long b,m;
		cin>>a>>b>>m;
		long long t=modulo(a,m);
		cout<<power(t,b,m)<<endl;
	}
}

