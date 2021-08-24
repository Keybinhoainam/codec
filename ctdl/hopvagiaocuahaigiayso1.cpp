#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n],b[m];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		vector<ll> c(n+m);
		vector<ll>::iterator it;
		it=set_union(a,a+n,b,b+m,c.begin());
		c.resize(it-c.begin());
		for(it=c.begin();it!=c.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		it=set_intersection(a,a+n,b,b+m,c.begin());
		c.resize(it-c.begin());
		for(it=c.begin();it!=c.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		
	}
}

