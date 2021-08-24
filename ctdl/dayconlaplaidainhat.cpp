#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int d[n+1][n+1];
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				d[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j&&s[i-1]==s[j-1])
				{
					d[i][j]=d[i-1][j-1]+1;
				}
				else d[i][j]=max(d[i-1][j],d[i][j-1]);
			}
		}
		cout<<d[n][n]<<endl;
		
	}
}

