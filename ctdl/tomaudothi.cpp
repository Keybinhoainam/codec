#include<bits/stdc++.h>
using namespace std;
int v,e,m;
int mau[100];
bool check(int i,int u,vector<int>a[])
{
	for(int j=0;j<a[u].size();j++)
	{
		if(i==mau[a[u][j]])return 0;
	}
	return 1;
}
bool kt(int u,vector<int>a[])
{
	if(u==v+1)return 1;
	for(int i=1;i<=m;i++)
	{
		if(check(i,u,a))
		{
			mau[u]=i;
			if(kt(u+1,a))return 1;
			mau[u]=0;
		}
	}
	return 0;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>v>>e>>m;
		vector<int>a[v+5];
		memset(mau,0,sizeof(mau));
		int u1,u2;
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			a[u1].push_back(u2);
			a[u2].push_back(u1);
		}
		if(kt(1,a))cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
