#include<bits/stdc++.h>
using namespace std;
int v,e;
int dem;
bool a[1005][1005],a1[1005];
void dfs(int u)
{
	a1[u]=1;
	for(int i=1;i<=v;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
			dfs(i);
		}
	}
}
bool timcanhcau()
{
	memset(a1,0,sizeof(a1));
//	dem=0;
	dfs(1);
	for(int i=1;i<=v;i++)
	{
		if(a1[i]==0)return 1;
	}
	return 0;
}
void kt()
{
	for(int i=1;i<v;i++)
	{
		for(int j=i+1;j<=v;j++)
		{
			if(a[i][j]==1)
			{
				a[i][j]=0;
				a[j][i]=0;
				if(timcanhcau())
				{
					cout<<i<<" "<<j<<" ";
				}
				a[i][j]=1;
				a[j][i]=1;
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
		cin>>v>>e;
		int u1,u2;
		memset(a,0,sizeof(a));
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
			a[u2][u1]=1;
		}
		kt();
		cout<<endl;
	}
}
