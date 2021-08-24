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
		long long tem=a[0]-1;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]==b[i])
				{
					cout<<a[j]<<" ";
					a[j]=tem;
				}
				if(a[j]>b[i])break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>tem)cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}

