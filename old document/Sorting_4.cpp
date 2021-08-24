#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m;
		cin>>n>>m;
		long long a[n],b[m];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		sort(a,a+n);
		sort(b,b+m);
		vector<long long> v(100000);
		vector<long long>::iterator it=set_union(a,a+n,b,b+m,v.begin());
		v.resize(it-v.begin());
		for(it=v.begin();it!=v.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		vector<long long>::iterator it2=set_intersection(a,a+n,b,b+m,v.begin());
		v.resize(it2-v.begin());
		for(it2=v.begin();it2!=v.end();it2++)
		{
			cout<<*it2<<" ";
		}
		cout<<endl;
	}
}

