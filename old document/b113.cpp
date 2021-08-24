#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
int test()
{
	int r[n],c[n],max1=0,dem=0;
	for(int i=0;i<n;i++)
	{
		r[i]=0;c[i]=0;
	}
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
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<test()<<endl;
	}
}

