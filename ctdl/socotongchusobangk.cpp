#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
long long tmp[101][50001];
long long kt1(int n,int k)
{
	if(n==0)return k==0;
	if(k==0)return 1;
	if(tmp[n][k]!=-1)return tmp[n][k];
	long long kq=0;
	for(int i=0;i<=9;i++)
	{
		if(k>=i)kq=(kq+kt1(n-1,k-i))%mod;
	}
	tmp[n][k]=kq;
	return kq;
}
long long kt(int n,int k)
{
	long long kq=0;
	memset(tmp,-1,sizeof(tmp));
	for(int i=1;i<=9;i++)
	{
		if(k>=i)kq=(kq+kt1(n-1,k-i))%mod;
	}
	return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		cout<<kt(n,k)<<endl;
	}
}

