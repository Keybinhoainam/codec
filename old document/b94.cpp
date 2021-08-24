#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m,sum=0;
		cin>>n>>m;
		long long a[n],b[m];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int j=0;j<m;j++)cin>>b[j];
		for(int i=0;i<n;i++)
		{
			int u=i,sump=0;
			while(u>=0)
			{
				sump+=a[u];
				u--;
			}
			for(int j=i+1;j<m;j++)sump+=b[j];
			if(sump>sum)sum=sump;
		}
		for(int i=0;i<m;i++)
		{
			int u=i,sump=0;
			while(u>=0)
			{
				sump+=b[u];
				u--;
			}
			for(int j=i+1;j<n;j++)sump+=a[j];
			if(sump>sum)sum=sump;
		}
		cout<<sum<<endl;
	}
}

