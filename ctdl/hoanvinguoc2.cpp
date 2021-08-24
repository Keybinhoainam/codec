#include<bits/stdc++.h>
using namespace std;
int dem;
void kt1(int i,int n,int a[],bool x[])
{
	for(int j=n;j>=1;j--)
	{
		if(x[j]==0)
		{
			a[i]=j;
			if(i==n)
			{
				dem++;
//				for(int k=1;k<=n;k++)cout<<a[k];
//				cout<<" ";
			}
			else
			{
				x[j]=1;
				kt1(i+1,n,a,x);
				x[j]=0;
			}
		}
	}
}
void kt2(int i,int n,int a[],bool x[])
{
	for(int j=n;j>=1;j--)
	{
		if(x[j]==0)
		{
			a[i]=j;
			if(i==n)
			{
//				dem++;
				for(int k=1;k<=n;k++)cout<<a[k];
				cout<<" ";
			}
			else
			{
				x[j]=1;
				kt2(i+1,n,a,x);
				x[j]=0;
			}
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n+5];
		bool x[15];
		memset(x,false,sizeof(x));
		dem=0;
		kt1(1,n,a,x);
		cout<<dem<<endl;
		kt2(1,n,a,x);
		cout<<endl;
	}
}

