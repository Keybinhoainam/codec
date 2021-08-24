#include<bits/stdc++.h>
using namespace std;
int kq[1000][1000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int u,v;
		int truoc[n+5];
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			truoc[v]=u;
		}
		for(int i=1;i<=n;i++)
		{
			int check=1;
			for(int j=1;j<=n;j++)
			{
				if(truoc[j]==i)
				{
					check=0;
					break;
				}
			}
			if(check==1)
			{
//				cout<<"OK\n";
				stack<int>q;
				q.push(i);
				int k=truoc[i];
				while(k!=1)
				{
					q.push(k);
					k=truoc[k];
					
				}
				q.push(1);
				while(!q.empty())
				{
					cout<<q.top()<<" ";q.pop();
				}
				cout<<endl;
			}
		}
	}
}

