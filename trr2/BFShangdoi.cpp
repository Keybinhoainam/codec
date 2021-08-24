#include<bits/stdc++.h>
using namespace std;
bool c[1000],a[1000][1000];
int u;
void kt(int u1)
{
	queue<int>q;
//	cout<<u1<<" ";
	q.push(u1);
	c[u1]=1;
	while(!q.empty())
	{
		int t=q.front();q.pop();
		cout<<t<<" ";
		for(int i=1;i<=u;i++)
		{
			if(c[i]==0&&a[t][i]==1)
			{
				c[i]=1;
				q.push(i);
			}
		}
	}
}
int main()
{
	cin>>u;
	for(int i=1;i<=u;i++)
	{
		for(int j=1;j<=u;j++)cin>>a[i][j];
	}
	memset(c,0,sizeof(c));
	kt(1);
	cout<<endl;
}

