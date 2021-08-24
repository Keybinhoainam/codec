#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<int,int>t,c;
	int a[n+5][n+5];
	for(int i=0;i<n;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		if(v2<v1)swap(v2,v1);
		c[v1]=1;
		a[v1][t[v1]++]=v2;
	}
	for(auto i:c)
	{
		if(c[i.first]==1)
		{
			sort(a[i.first],a[i.first]+t[i.first]);
			for(int j=0;j<t[i.first];j++)cout<<i.first<<" "<<a[i.first][j]<<endl;
			
		}
	}
}

