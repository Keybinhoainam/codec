#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m],s[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(i==0||j==0)s[i][j]=a[i][j];
			}
		}
		int kq=0;
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				if(a[i][j]==1)
				{
					s[i][j]=min(s[i-1][j],min(s[i][j-1],s[i-1][j-1]))+1;
				}
				else s[i][j]=0;
				if(s[i][j]>kq)kq=s[i][j];
			}
		}
		cout<<kq<<endl;
	}
}

