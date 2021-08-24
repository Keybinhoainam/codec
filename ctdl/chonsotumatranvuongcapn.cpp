#include<bits/stdc++.h>
using namespace std;
int a[1000][1000],kq[1000],n,k,tong=0,dem;
vector<int>x[1000];
map<int,bool>c;
void kt(int i)
{
	for(int j=0;j<n;j++)
	{
		if(c[j]==0)
		{
			c[j]=1;
			tong+=a[i][j];
			kq[i]=j+1;
			if(i==n-1&&tong==k)
			{
				
				for(int k=0;k<=n-1;k++)
				{
					x[dem].push_back(kq[k]);
				}
				dem++;
			}
			else
			{
				if(i<n-1&&tong<=k)
				{
					kt(i+1);
				}
			}
			c[j]=0;
			tong-=a[i][j];
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)cin>>a[i][j];
	}
	dem=0;
	tong=0;
	kt(0);
	cout<<dem<<endl;
//	cout<<x[0][0]<<endl;
	for(int i=0;i<dem;i++)
	{
		for(int j=0;j<x[i].size();j++)cout<<x[i][j]<<" ";
		cout<<endl;
	}
}

