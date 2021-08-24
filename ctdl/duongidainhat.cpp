#include<bits/stdc++.h>
using namespace std;
int n,m,c[1000],kq;
void dfs(int u,int dem,int a[100][100])
{
	kq=max(kq,dem);
//	c[u]=1;
	for(int i=0;i<n;i++)
	{
		if(c[i]==0&&a[u][i]==1)
		{
			a[u][i]=0;
			a[i][u]=0;
			dfs(i,dem+1,a);
			a[u][i]=1;
			a[i][u]=1;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a[100][100]={0};
		cin>>n>>m;
		int u,v;
		for(int i=0;i<m;i++)
		{
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
		}
		kq=0;
		for(int i=0;i<n;i++)
		{
			memset(c,0,sizeof(c));
			dfs(i,0,a);
		}
		cout<<kq<<endl;
	}
}

