#include<bits/stdc++.h>
using namespace std;
int v,e;
int a1[100000];
int a[100000][100000];
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
//	map<int,int>a1;
	int kq=0;
	for(int i=1;i<=v;i++)
	{
		if(a1[i]==0)
		{
//			dem++;
			int dem=0;
			dfs(i);
			for(int j=1;j<=v;j++)
			{
				if(a1[j]==1)
				{
					dem++;
					a1[j]=-1;
				}
			}
//			cout<<i<<" "<<dem<<endl;
			kq=max(dem,kq);
		}
	}
	return kq;
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
//		map<int,int>a[100000];
//		for(int i=1;i<=v;i++)a[i].clear();
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
			a[u2][u1]=1;
			
		}
		cout<<kt()<<endl;
	}
}

