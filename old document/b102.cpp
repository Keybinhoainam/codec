#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m;
		cin>>n>>m;
		long long a[n+5],b[m+5];
		vector<long long> c(100000);
		vector<long long>:: iterator it;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int j=0;j<m;j++)cin>>b[j];
		sort(a,a+n);
		sort(b,b+m);
//		long long* c=new long long [ma];
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

