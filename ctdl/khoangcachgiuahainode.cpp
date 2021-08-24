#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],c[1001];
int bfs(int u1,int v1,int n)
{
//	queue<pair<int,int>>q;
//	pair<int,int>u;
//	u.first=u1;u.second=0;
//	q.push(u);
//	int dem=0;
//	while(!q.empty())
//	{
//		pair<int,int> t;t=q.front();q.pop();
//		if(t.first==v1)return t.second;
//		for(int i=0;i<a[t.first].size();i++)
//		{
//			pair<int,int> t1;
//			t1.first=a[t.first][i];
//			t1.second=t.second+1;
//			q.push(t1);
//		}
//	}


	queue<int>q;
	int kc[1005];
	q.push(u1);
	kc[u1]=0;
	while(!q.empty())
	{
		int t=q.front();q.pop();
		if(t==v1)return kc[t];
		for(int i=1;i<=n;i++)
		{
			if(a[t][i]==1&&c[i]==0)
			{
				c[i]=1;
				kc[i]=kc[t]+1;
			q.push(i);
			}
		}
	}
	
}
//void dfs(int u,int v,int dem)
//{
//	if(u==v)
//	{
//		
//		return;
//	}
//	c[u]=1;
//	for(int i=1;i<=n;i++)
//	{
//		if(c[i]==0&&a[u][i]==1)
//		{
//			c[i]=1;
//			dfs(i,v,dem+1);
//			c[i]=0;
//		}
//	}
//}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int u,v;
		for(int i=1;i<=n;i++)
		{
			memset(a[i],0,sizeof(a[i]));
		}
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
		}
		int Q;
		cin>>Q;
		int u1,u2,kq[Q];
		
		for(int i=0;i<Q;i++)
		{
			cin>>u1>>u2;
			memset(c,0,sizeof(c));
			kq[i]=bfs(u1,u2,n);
		}
		for(int i=0;i<Q;i++)
		{
			cout<<kq[i]<<endl;
		}
		
	}
}

