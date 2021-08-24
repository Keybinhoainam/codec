#include<bits/stdc++.h>
using namespace std;
int n,x,a[1000],x1[1000],check=0,dem;
void kt1(int i,int tong,int bd)
{
	for(int j=bd;j<n;j++)
	{
		if(tong+a[j]<=x)
		{
			x1[i]=a[j];
			tong+=a[j];
			if(tong==x)
			{
				
				check=1;
				dem++;
			}
			else 
			{
				if(tong<x)kt1(i+1,tong,j);
			}
			tong-=a[j];
		}
		else return;
	}
}
void kt(int i,int tong,int bd)
{
	for(int j=bd;j<n;j++)
	{
		if(tong+a[j]<=x)
		{
			x1[i]=a[j];
			tong+=a[j];
			if(tong==x)
			{
				check=1;
				cout<<"{";
				for(int k=0;k<i;k++)
				{
					cout<<x1[k]<<" ";
				}
				cout<<x1[i]<<"} ";
			}
			else 
			{
				if(tong<x)kt(i+1,tong,j);
			}
			tong-=a[j];
		}
		else return;
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>x;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		check=0;
		dem=0;
		kt1(0,0,0);
		if(check==1)cout<<dem<<" ";
		kt(0,0,0);
		
		if(check==0)cout<<-1;
		cout<<endl;
		
	}
}

