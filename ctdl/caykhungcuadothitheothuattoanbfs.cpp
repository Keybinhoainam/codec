#include<bits/stdc++.h>
using namespace std;
struct canh{
	int s,t;
};
int n,m;
bool chuaxet[1005];
//void dfs(int u,vector<int>a[],queue<canh>&q)
//{
//	chuaxet[u]=1;
//	for(int i=0;i<a[u].size();i++)
//	{
//		{
//		if(chuaxet[a[u][i]]==0){
//		
//			canh x;
//			x.s=u;x.t=a[u][i];
////			cout<<x.s<<" "<<x.t<<"\t";
//			q.push(x);
//			dfs(a[u][i],a,q);
//		}
//	}
//}
void bfs(int u,vector<int>a[],queue<canh>&q)
{
	queue<int>v;
	chuaxet[u]=1;
	v.push(u);
	while(!v.empty())
	{
		int x=v.front();v.pop();
		for(int i=0;i<a[x].size();i++)
		{
			if(chuaxet[a[x][i]]==0)
			{
				chuaxet[a[x][i]]=1;
				canh b;
				b.s=x;b.t=a[x][i];
				q.push(b);
				v.push(a[x][i]);
			}
		}
	}
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int u,n1,n2;
		cin>>n>>m>>u;
		vector<int>a[n+1];
//		memset(a,0,sizeof(a));
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=n;j++)a[i][j]=0;
//		}
//		map<int,int>a[10000];
		for(int i=0;i<=n;i++)chuaxet[i]=0;
		for(int i=0;i<m;i++)
		{
			cin>>n1>>n2;
			a[n1].push_back(n2);
			a[n2].push_back(n1);
		}
		queue<canh>q;
		bfs(u,a,q);
//		cout<<q.size();
		if(q.size()==n-1)
		{
			while(!q.empty())
			{
				canh x=q.front();q.pop();
				cout<<x.s<<" "<<x.t<<endl;
			}
		}
		else cout<<-1<<endl;
	}
}

