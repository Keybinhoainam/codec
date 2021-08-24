#include<bits/stdc++.h>
using namespace std;
bool a[10000];
int v,e,u1,u2;
void kt(int u,vector<int>c[10000])
{
	cout<<u<<" ";
	a[u]=1;
	sort(c[u].begin(),c[u].end());
	for(int i=0;i<c[u].size();i++)
	{
		if(a[c[u][i]]==0)
		{
			a[c[u][i]]=1;
			kt(c[u][i],c);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int u;
		cin>>v>>e>>u;
		memset(a,0,sizeof(a));
		vector<int>c[10000];
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			c[u1].push_back(u2);
			c[u2].push_back(u1);
	}
		kt(u,c);
		cout<<endl;
	}
}

