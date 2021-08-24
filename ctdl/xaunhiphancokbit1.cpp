#include<bits/stdc++.h>
using namespace std;
void kt(int i,int n,int k,int sum,int a[])
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n&&sum+j==k)
		{
			for(int k=1;k<=n;k++)cout<<a[k];
			cout<<endl;
		}
		else
		{
			if(i<n)
			{
				kt(i+1,n,k,sum+a[i],a);
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
		int n,k;
		cin>>n>>k;
		int a[n+5];
		kt(1,n,k,0,a);
//		cout<<endl;
	}
}

