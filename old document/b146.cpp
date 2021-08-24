#include<bits/stdc++.h>
using namespace std;
long long n,k,a[25][25],sum,dem;
void test(int i,int j)
{
	if(i==n&&j==n&&sum==k)dem++;
	else
	{
		if(a[i+1][j]!=-1&&sum+a[i+1][j]<=k)
		{
			sum+=a[i+1][j];
			test(i+1,j);
			sum-=a[i+1][j];
		}
		if(a[i][j+1]!=-1&&sum+a[i][j+1]<=k)
		{
			sum+=a[i][j+1];
			test(i,j+1);
			sum-=a[i][j+1];
		}
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>k;
		for(int i=0;i<=n+1;i++)
		{
			memset(a[i],-1,sizeof(a[i]));
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		sum=a[1][1];
		dem=0;
		test(1,1);
		cout<<dem<<endl;
	}
}

