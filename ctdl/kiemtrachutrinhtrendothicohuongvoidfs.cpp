#include<bits/stdc++.h>
using namespace std;
int v,e;
int a[1005][1005],a1[1005];
void dfs(int u)
{
	for(int i=1;i<=v;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
			a1[i]=1;
			a[u][i]=0;
//			a[i][u]=0;
			dfs(i);
			a[u][i]=1;
//			a[i][u]=1;
		}
	}
}
string kt()
{
	for(int i=1;i<=v;i++)
	{
		memset(a1,0,sizeof(a1));
		dfs(i);
		if(a1[i]==1)return "YES";
	}
	return "NO";
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
		for(int i=1;i<=e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
//			a[u2][u1]=1;
		}
		cout<<kt()<<endl;
	}
}

