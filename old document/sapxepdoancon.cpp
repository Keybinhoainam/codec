#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5];
		for(int i=1;i<=n;i++)cin>>a[i];
		long long max1[n+5],min1[n+5];
		max1[1]=a[1];min1[n-1]=a[n];
		for(int i=2;i<n;i++)
		{
			max1[i]=max(max1[i-1],a[i]);
		}
		for(int i=n-2;i>=0;i--)
		{
			min1[i]=min(min1[i+1],a[i+1]);
		}
		long long k=0,m[n];
		for(int i=1;i<n;i++)
		{
			if(max1[i]<=min1[i])
			{
				m[k++]=i;
			}
		}
		cout<<k<<endl;
		for(int i=0;i<k;i++)cout<<m[i]<<" ";
		cout<<endl;
	}
}

