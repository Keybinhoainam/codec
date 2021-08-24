#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],check[n];
		pair<long long,long long> b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i].first=a[i];
			b[i].second=i;
			check[i]=0;
		}
		sort(b,b+n);
		
		int dem=0;
		for(int i=0;i<n;i++)
		{
			if(check[i]==1||b[i].second==i)continue;
			int c=0;
			int j=i;
			while(check[j]==0)
			{
				check[j]=1;
				j=b[j].second;
				c++;
			}
			if(c>0)dem+=(c-1);
		}
		cout<<dem<<endl;
	}
}

