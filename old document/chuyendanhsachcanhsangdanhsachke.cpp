#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int v,e;
		cin>>v>>e;
		int a[v+5][e+5];
		map<int,int>t;
		for(int i=0;i<e;i++)
		{
			int v1,v2;
			cin>>v1>>v2;
			a[v1][t[v1]++]=v2;
			a[v2][t[v2]++]=v1;
		}
		for(int i=1;i<=v;i++)
		{
			cout<<i<<": ";
			for(int j=0;j<t[i];j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	
	
	}
}

