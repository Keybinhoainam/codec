#include<bits/stdc++.h>
using namespace std;
int n,k,dem;
int x[1000][1000],b[10000];
void kt(int a[],int tong,int t,int bd)
{
	if(tong==k)
	{
		for(int i=0;i<t;i++)x[dem][i]=b[i];
		dem++;
		return ;
	}
	for(int i=bd;i<n;i++)
	{
		if(tong+a[i]<=k)
		{
			b[t]=a[i];
			kt(a,tong+a[i],t+1,i+1);
			
		}
	}
}
int main()
{
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	dem=0;
	kt(a,0,0,0);
	for(int i=dem-1;i>=0;i--)
	{
		for(int j=0;j<sizeof(a[i]);j++)
		{
			if(j>0&&x[i][j]>0)cout<<x[i][j]<<" ";
			if(j==0)cout<<x[i][j]<<" ";
//			cout<<endl;
		}
		cout<<endl;
	}
	cout<<dem<<endl;
}

