#include<bits/stdc++.h>
using namespace std;
int test(int a[105][105],int n)
{
	int r[n+5],c[n+5],max1=0;
	memset(r,0,sizeof(r));
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			r[i]+=a[i][j];
			c[j]+=a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		max1=max(max1,r[i]);
		max1=max(max1,c[i]);
	}
	int dem=0;
	for(int i=0,j=0;i<n&&j<n;)
	{
		int d=min(max1-r[i],max1-c[j]);
		a[i][j]+=d;
		r[i]+=d;
		c[j]+=d;
		dem+=d;
		if(r[i]==max1)i++;
		if(c[j]==max1)j++;
	}
	return dem;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[105][105];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<test(a,n)<<endl;
	}
}

