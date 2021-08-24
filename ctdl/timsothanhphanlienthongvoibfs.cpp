#include<bits/stdc++.h>
using namespace std;
int v,e;
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
int kt()
{
	int dem=0;
	for(int i=1;i<=v;i++)
	{
		if(a1[i]==0)
		{
			dem++;
			dfs(i);
		}
	}
	return dem;
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
		memset(a1,0,sizeof(a1));
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
			a[u2][u1]=1;
			
		}
		cout<<kt()<<endl;
	}
}
