#include<bits/stdc++.h>
using namespace std;
bool c[100];
int V,E,check=0;
void dfs(int u,int a[100][100],int k)
{
//	cout<<u<<"  "<<k<<endl;
	if(check==1)return;
	if(k==V)
	{
//		cout<<u<<endl;
		check=1;return;
	}
	for(int i=1;i<=V;i++)
	{
		if(c[i]==0&&a[u][i]==1)
		{
			c[i]=1;
			dfs(i,a,k+1);
			c[i]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>V>>E;
		int u,v;
		int a[100][100]={};
		for(int i=0;i<E;i++)
		{
			cin>>u>>v;
//			cout<<u<<v<<endl;
			a[u][v]=1;
			a[v][u]=1;
		}
//		cout<<a[3][4]<<endl;
		check=0;
		memset(c,0,sizeof(c));
		for(int i=1;i<=V;i++)
		{
			c[i]=1;
			dfs(i,a,1);
		}
		
		if(check==1)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
