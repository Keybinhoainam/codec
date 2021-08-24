#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int v,e,v1,v2;
		cin>>v>>e;
		vector<int>a[10000];
		for(int i=0;i<e;i++)
		{
			cin>>v1>>v2;
			a[v1].push_back(v2);
//			a[v2].push_back(v1);
		}
		for(int i=1;i<=v;i++)
		{
			cout<<i<<": ";
			sort(a[i].begin(),a[i].end());
			for(int j=0;j<a[i].size();j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
}

