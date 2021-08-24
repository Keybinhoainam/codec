#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[1000],tong,tb,check;
bool c1[1000];
bool kt(int test,ll sumpt)
{
	if(sumpt==tb)
	{
		if(test==k-1)return 1;
		return kt(test+1,0);
	}
	for(int i=n-1;i>=0;i--)
	{
		if(c1[i]==1||sumpt+a[i]>tb)continue;
		else
		{
			c1[i]=1;
			sumpt+=a[i];
			bool ans=kt(test,sumpt);
			if(ans)return 1;
			c1[i]=0;
			sumpt-=a[i];
		}
	}
	return 0;
}
bool kt1()
{
	if(tong%k!=0)return 0;
	if(n<k)return 0;
	if(k==1)return 1;
//	cout<<"OK"<<endl;
	for(int i=0;i<n;i++)c1[i]=0;
//	for(int i=0;i<k;i++)sumpt[i]=0;
//	tb=tong/k;
//	c1[n-1]=1;
//	sumpt[0]+=a[n-1];
//	check=0;
//	memset(c1,0,sizeof(c1));
	return kt(0,0);
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
//		memset(c1,0,sizeof(c1));
		tong=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tong+=a[i];
		}
		cout<<kt1()<<endl;
	}
}
