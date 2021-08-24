#include<bits/stdc++.h>
using namespace std;
int v,e;
int a[1005][1005],a1[1005],a2[1005];
void dfs(int u)
{
	a2[u]++;
	a1[u]=1;
	for(int i=1;i<=v;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
			dfs(i);
		}
	}
}
string kt()
{
	memset(a2,0,sizeof(a2));
	for(int i=1;i<=v;i++)
	{
		memset(a1,0,sizeof(a1));
		dfs(i);
	}
	for(int i=1;i<=v;i++)
	{
		if(a2[i]!=v)return "NO";
	}
	return "YES";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>v;
		int u1,u2;
		memset(a,0,sizeof(a));
		for(int i=1;i<v;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
			a[u2][u1]=1;
		}
		cout<<kt()<<endl;
	}
}

