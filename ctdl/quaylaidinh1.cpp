#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
struct node{
	int val,lv;
};
int bfs1()
{
	queue<node>q;
	q.push({1,1});
	while(!q.empty())
	{
		node t=q.front();q.pop();
		if(t.val==2)return t.lv;
		for(int i=1;i<=n;i++)
		{
			if(a[t.val][i]==1)
			{
				a[t.val][i]=0;
				q.push({i,t.lv+1});
			}
		}
	}
}
//int bfs2()
//{
//	queue<node>q;
//	q.push({2,1});
//	while(!q.empty())
//	{
//		node t=q.front();q.pop();
//		if(t.val==1)return t.lv;
//		for(int i=1;i<=n;i++)
//		{
//			if(a[t.val][i]==1)
//			{
//				a[t.val][i]=0;
//				q.push({i,t.lv+1});
//			}
//		}
//	}
//}
void dfs(int u,int dem,int x[])
{
	if(u==2)
	{
		kq1=min(kq1.dem);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			memset(a[i],0,sizeof(a[i]));
		}
		int u1,u2;
		for(int i=0;i<m;i++)
		{
			cin>>u1>>u2;
			a[u1][u2]=1;
		}
//		cout<<bfs1()+bfs2()<<endl;
		cout<<bfs1()<<endl;
	}
}
/*2

6 7

1 3

3 4

4 5

5 1

4 2

2 6

6 3

9 11

1 3

3 4

4 2

2 5

5 3

3 6

6 1

2 7

7 8

8 9

9 1
*/
