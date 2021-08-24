#include<bits/stdc++.h>
using namespace std;
int v,e,s,t;
bool a[1005][1005],a1[1005];
int truoc[1005];
void dfs(int u)
{
	stack<int>q;
	q.push(u);
	a1[u]=1;
	while(!q.empty())
	{
		int t=q.top();q.pop();
		for(int i=1;i<=v;i++)
		{
			if(a1[i]==0&&a[t][i]==1)
			{
				a1[i]=1;
				q.push(t);
				q.push(i);
				truoc[i]=t;
				break;
			}
		}
	}
}
void kt()
{
	memset(a1,0,sizeof(a1));
	memset(truoc,0,sizeof(truoc));
	dfs(s);
	if(truoc[t]==0)cout<<-1;
	else{
		stack<int>q;
		q.push(t);
		int u=truoc[t];
		while(u!=s)
		{
			q.push(u);
			u=truoc[u];
		}
		q.push(s);
		while(!q.empty())
		{
			cout<<q.top()<<" ";q.pop();
		}
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>v>>e>>s>>t;
		int u1,u2;
		memset(a,0,sizeof(a));
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
//			a[u2][u1]=1;
		}
		kt();
	}
}

