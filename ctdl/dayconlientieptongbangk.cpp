#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
string kt(ll a[])
{
	ll tong=a[0];
	if(tong==k)return "YES";
	int j=0;
	for(int i=1;i<n;i++)
	{
		tong+=a[i];
		while(tong>k&&j<i)
		{
			tong-=a[j];
			j++;
		}
		if(tong==k)return "YES";
	}
	return "NO";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		ll a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<kt(a)<<endl;
	}
}

