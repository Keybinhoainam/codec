#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[105][105];
void check(int i2,int j2)
{
	for(int i=i2-1;i<=i2+1;i++)
	{
		for(int j=j2-1;j<=j2+1;j++)
		{
			if(a[i][j]==1)
			{
				a[i][j]=2;
				check(i,j);
			}
		}
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
				
				if(i==0||i==n+1||j==0||j==m+1)a[i][j]=0;
				else cin>>a[i][j];
			}
		}
		long long dem=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				
				if(a[i][j]==1)
				{
					dem++;
					check(i,j);
				}
			}
		}
		cout<<dem<<endl;
}
}


