#include<bits/stdc++.h>
using namespace std;
bool a[10000];
int v,e,u1,u2;
void dfs(int u,vector<int>c[10000])
{
//	cout<<u<<" ";
	a[u]=1;
	sort(c[u].begin(),c[u].end());
	for(int i=0;i<c[u].size();i++)
	{
		if(a[c[u][i]]==0)
		{
			a[c[u][i]]=1;
			dfs(c[u][i],c);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int u1,u2;
		cin>>v>>e;
		vector<int>c[10000];
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			c[u1].push_back(u2);
			c[u2].push_back(u1);
		}
		int q;
		cin>>q;
		int x,y;
		for(int i=0;i<q;i++)
		{
			cin>>x>>y;
			memset(a,0,sizeof(a));
			dfs(x,c);
			if(a[y]==1)cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
	}
}

