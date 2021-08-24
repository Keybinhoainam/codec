#include<bits/stdc++.h>
using namespace std;
int v,e;
bool a[1005][1005],c[1005];
void bfs(int u)
{
	queue<int>q;
	q.push(u);
	while(!q.empty())
	{
		int t=q.front();q.pop();
		for(int i=1;i<=v;i++)
		{
			if(a[t][i]==1&&c[i]==0)
			{
				c[i]=1;
				q.push(i);
			}
		}
	}
}
string kt()
{
	for(int i=1;i<=v;i++)
	{
		memset(c,0,sizeof(c));
		for(int j=1;j<=v;j++)
		{
			if(a[i][j]==1)
			{
				a[j][i]=0;
				bfs(j);
				if(c[i]==1)return "YES";
				a[j][i]=1;
			}
		}
	}
	return "NO";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
//		int v,e;
		cin>>v>>e;
		int u1,u2;
		memset(a,0,sizeof(a));
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
			a[u2][u1]=1;
		}
		cout<<kt()<<endl;
	}
}

