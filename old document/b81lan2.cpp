#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long test(long long a[],long long dem)
{
	long long dem1,m=0;
	for(int i=0;i<=n-dem;i++)
	{
		dem1=0;
		for(int j=i;j<i+dem;j++)
		{
			if(a[j]<=k)dem1++;
		}
		if(dem1>m)m=dem1;
	}
	return dem-m;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long dem=0;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=k)dem++;
		}
		cout<<test(a,dem)<<endl;
	}
}
