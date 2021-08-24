#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int v,e,u,u1,u2;
		cin>>v>>e>>u;
//		bool t[10000][10000];
		map<int,bool>c;
		vector<int> t[5000];
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			t[u1].push_back(u2);
//			t[u2].push_back(u1);
		}
		int truoc[1005]={};
		queue<int> a;
		a.push(u);
		c[u]=1;
//		cout<<"ok"<<endl;
		cout<<u<<" ";
		while(!a.empty())
		{
			int t1=a.front();
			a.pop();
			sort(t[t1].begin(),t[t1].end());
			for(int i=0;i<t[t1].size();i++)
			{
				if(c[t[t1][i]]==0)
				{
					c[t[t1][i]]=1;
					a.push(t[t1][i]);
					cout<<t[t1][i]<<" ";
				}
			}
		}
		cout<<endl;
	}
}

