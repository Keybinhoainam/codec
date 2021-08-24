#include<bits/stdc++.h>
using namespace std;
long long n,k,dem;
long long Test(long long dem,long long a[])
{
	long long m=0;
	for(int i=0;i<=n-dem;i++)
	{
		long long dem1=0;
		for(int j=i;j<i+dem;j++)
		{
			if(a[j]<=k)dem1++;
		}
		if(m<dem1)m=dem1;
	}
	return dem-m;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>k;
		dem=0;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=k)dem++;
		}
		cout<<Test(dem,a)<<endl;
	}
}

