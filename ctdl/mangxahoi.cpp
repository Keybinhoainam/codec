#include<bits/stdc++.h>
using namespace std;
int n,m;
int a1[10005];
int bfs(int u,vector<int>a[])
{
	int dem=0;
	queue<int>q;
	q.push(u);
	a1[u]=1;
	while(!q.empty())
	{
		int t=q.front();q.pop();
		dem++;
		for(int i=0;i<a[t].size();i++)
		{
			if(a1[a[t][i]]==0)
			{
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
		cin>>n>>m;
		vector<int>a[n+5];
		memset(a1,0,sizeof(a1));
		int u1,u2;
		for(int i=0;i<m;i++)
		{
			cin>>u1>>u2;
			a[u1].push_back(u2);
			a[u2].push_back(u1);
		}
		int k = 0;
		for(int i =1;i<=n;i++)
			if(a1[i]==0)
				k = max(k,bfs(i,a));
				
		if(k==n) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
	}
}

