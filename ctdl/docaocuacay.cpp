#include<bits/stdc++.h>
using namespace std;
int hmax;
void dfs(int u,int h,vector<int>a[])
{
	hmax=max(hmax,h);
	for(int i=0;i<a[u].size();i++)
	{
		dfs(a[u][i],h+1,a);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		vector<int>a[n+5];
		int u,v;
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			a[u].push_back(v);
		}
		hmax=0;
		dfs(1,0,a);
		cout<<hmax<<endl;
	}
}

