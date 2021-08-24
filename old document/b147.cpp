#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>m;
		int a[n][n+m-1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n+m-1;j++)a[i][j]=-1;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int x[10000],i=0,j=0,t2=0,t=0;
		while(j<n+m-1)
		{
			int u1=j;i=0;t2=t;
			while(u1>=0&&i<n)
			{
				if(a[i][u1]!=-1)x[t++]=a[i][u1];
				u1--;
				i++;
			}
			if(j%2==0)reverse(x+t2,x+t);
			j++;
		}
		for(i=0;i<t;i++)cout<<x[i]<<" ";
		cout<<endl;
	}
}

