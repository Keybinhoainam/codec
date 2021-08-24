#include<bits/stdc++.h>
using namespace std;
long long n,a[50],check[50];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void kt(long long i)
{
	for(long long j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			a[i]=j;check[j]=1;
			if(i==n)xuat();
			else kt(i+1);
			check[j]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		memset(check,0,sizeof(check));
		kt(1);
		cout<<endl;
	}
}

