#include<bits/stdc++.h>
using namespace std;
bool c[100];
int V,E,check=0;
void dfs(int u,vector<int>a[100],int k)
{
//	cout<<u<<"  "<<k<<endl;
	if(check==1)return;
	if(k==V)
	{
//		cout<<u<<endl;
		check=1;return;
	}
	for(int i=0;i<a[u].size();i++)
	{
		if(c[a[u][i]]==0)
		{
//			cout<<u<<" "<<a[u][i]<<endl;
			c[a[u][i]]=1;
			dfs(a[u][i],a,k+1);
			c[a[u][i]]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>V>>E;
		int u,v;
		vector<int>a[100],b;// b luu cac dinh co trong do thi
							// a la cac canh 
//		int pt[100];
		int c2[100]={};
		for(int i=0;i<E;i++)
		{
			
			cin>>u>>v;
//			cout<<u<<v<<endl;
			if(c2[u]==0)b.push_back(u),c2[u]=1;
			if(c2[v]==0)b.push_back(v),c2[v]=1;
			a[u].push_back(v);
			a[v].push_back(u);
		}
//		cout<<a[3][4]<<endl;
		check=0;
		memset(c,0,sizeof(c));
		
		for(int i=0;i<b.size();i++)
		{
//			cout<<b[i]<<endl;
			
			c[b[i]]=1;
			dfs(b[i],a,1);
			c[b[i]]=0;
		}
		
		if(check==1)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

