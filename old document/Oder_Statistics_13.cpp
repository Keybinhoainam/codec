#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n,m;
		cin>>n>>m;
		long long a[n+5],b[m+5],sum=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		for(int i=0;i<n;i++)
		{
			long long sump=0;
			for(int j=0;j<=i;j++)sump+=a[j];
			for(int j=i+1;j<m;j++)sump+=b[j];
			if(sump>sum)sum=sump;
		}
		for(int i=0;i<m;i++)
		{
			long long sump=0;
			for(int j=0;j<=i;j++)sump+=b[j];
			for(int j=i+1;j<n;j++)sump+=a[j];
			if(sump>sum)sum=sump;
		}
		
		cout<<sum<<endl;
	}
}

