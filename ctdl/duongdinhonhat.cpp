#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int w[n][m];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		w[0][0]=a[0][0];
		for(int i=1;i<m;i++)w[0][i]=a[0][i]+w[0][i-1];
		for(int i=1;i<n;i++)w[i][0]=a[i][0]+w[i-1][0];
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				w[i][j]=min(w[i-1][j],min(w[i][j-1],w[i-1][j-1]))+a[i][j];
			}
		}
		cout<<w[n-1][m-1]<<endl;
	}
}

