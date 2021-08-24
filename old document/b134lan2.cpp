#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		long long dt[n],dg[n];
		for(int i=0;i<n;i++)
		{
			dt[i]=1;dg[i]=1;
		}
//		cout<<dt[0];
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j]&&dt[i]<dt[j]+1)
				{
					dt[i]=dt[j]+1;
				}
			}
		}
		for(int i=n-2;i>=0;i--)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]&&dg[i]<dg[j]+1)dg[i]=dg[j]+1;
			}
		}
		long long max1=dg[0]+dt[0]-1;
		for(int i=1;i<n;i++)
		{
			if(max1<dg[i]+dt[i]-1)max1=dg[i]+dt[i]-1;
		}
		cout<<max1<<endl;
	}
}

