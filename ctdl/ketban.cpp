#include<bits/stdc++.h>
using namespace std;
int v,e,dem;
//int a1[1005];
int bfs(int u,vector<int>a[],int a1[])
{
	a1[u]=1;
	queue<int>q;
	q.push(u);
	int dem=1;
	while(!q.empty())
	{
		int t=q.front();q.pop();
		for(int i=0;i<a[t].size();i++)
		{
			if(a1[a[t][i]]==0)
			{
				dem++;
				a1[a[t][i]]=1;
				q.push(a[t][i]);
			}
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
		vector<int>c[v+5];
		int a1[v+5];
		memset(a1,0,sizeof(a1));
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			c[u1].push_back(u2);
			c[u2].push_back(u1);
			
		}
		int kq=0;
		for(int i=1;i<=v;i++)
		{
			if(a1[i]==0)
			{
				kq=max(kq,bfs(i,c,a1));
			}
		}
		cout<<kq<<endl;
	}
}
