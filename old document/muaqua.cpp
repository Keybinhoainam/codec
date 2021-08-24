#include<bits/stdc++.h>
using namespace std;
int kt()
{
	long long n,m,k;
		cin>>n>>m>>k;
		long long c[n];
		for(int i=0;i<n;i++)cin>>c[i];
		long long a,b;
		cin>>a;
		long long x[a];
		map<long long,long long> t;
		for(int i=0;i<a;i++)
		{
			cin>>x[i];
			t[x[i]]++;
		}
		cin>>b;
		long long y[b],t1=0,t2[b];
		for(int i=0;i<b;i++)
		{
			cin>>y[i];
			t[y[i]]++;
			if(t[y[i]]==2)
			{
				t2[t1++]=y[i];
			}
		}
		
		if(2*k-t1>m||k>a||k>b)return -1;
		if(2*k-t1==m)
		{
			long long tong=0;
			for(int i=0;i<t1;i++)
			{
				tong+=c[t2[i]];
			}
		}
		if(2*k-t1<m)
		{
			long long tong=0;
			for(int i=0;i<t1;i++)
			{
				tong+=c[t2[i]];
			}
			long long t3[a];
			for(int i=0;i<a;i++)
			{
				if()
			}
			sort(x,x+a);
			sort(y,y+b);
			for(int i=t1;i<k;i++)
			{
				tong+=
			}
		}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		
		
	}
}

