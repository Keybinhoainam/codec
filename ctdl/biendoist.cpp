#include<bits/stdc++.h>
using namespace std;
//struct node{
//	int val,lev;
//};
int kt(int s,int t)
{
//	set<int>visit;
	queue<int>tree;
//	node n={s,0};
	tree.push(s);
	map<int,int>lev,check;
	lev[s]=0;
	while(!tree.empty())
	{
//		node x=tree.front();tree.pop();
		int x=tree.front();tree.pop();
		if(x==t)return lev[x];
//		visit.insert(x.val);
		check[x]=1;
		if (x*2 == t || x-1 == t)
            return lev[x]+1;
		if(check[x-1]==0&&x-1>=0)
		{
			lev[x-1]=lev[x]+1;
			tree.push(x-1);
		}
		if(check[x*2]==0&&x<=t)
		{
			lev[x*2]=lev[x]+1;
			tree.push(x*2);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int s,t;
		cin>>s>>t;
		cout<<kt(s,t)<<endl;
	}
}

