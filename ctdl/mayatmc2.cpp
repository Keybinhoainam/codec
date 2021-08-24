#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s,check;
ll kt(ll t[])
{
//	if(s1==0)return 0;
	ll t0=INT_MAX;
	map<int,int>a;
	for(int i=1;i<=s;i++)a[i]=INT_MAX;
	a[0]=0;
	for(int i=0;i<=s;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(t[j]<=i)
			{
				int way=a[i-t[j]];
				if(way!=INT_MAX&&way+1<a[i])a[i]=way+1;
			}
		}
	}
	if(a[s]!=INT_MAX)return a[s];
	else return -1;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>s;
		ll t[n];
		for(int i=0;i<n;i++)
		{
			cin>>t[i];
		}
		sort(t,t+n);
		cout<<kt(t)<<endl;
	}
}

