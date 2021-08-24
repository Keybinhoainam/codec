#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,c;
		cin>>n;
		long long a[n];
		map<long long,long long> b,check;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		long long t=0;
		priority_queue<long long,vector<long long>,less<long long> >q;
		for(int i=0;i<n;i++)
		{
			if(check[b[a[i]]]==0)
			{
				t++;
				q.push(b[a[i]]);
				check[b[a[i]]]=1;
			}
		}
		sort(a,a+n);
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(b[a[j]]==q.top())
				{
					
					cout<<a[j]<<" ";
				}
			}
			q.pop();
		}
		cout<<endl;
	}
}

