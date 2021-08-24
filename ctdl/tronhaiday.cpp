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
		ll a[n+m];
		for(int i=0;i<n+m;i++)cin>>a[i];
//		for(int i=0;i<m;i++)cin>>b[i];
		sort(a,a+n+m);
		for(int i=0;i<n+m;i++)cout<<a[i]<<" ";
		cout<<endl;
	}
}

