#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		long long c[n+5][n+5];
		for(int i=0;i<n;i++)c[0][i]=1;
		for(int i=1;i<=n;i++)
		{
			c[i][i]=1;
			for(int j=1;j<i;j++)
			{
				c[j][i]=(c[j-1][i-1]+c[j][i-1])%mod;
			}
		}
		cout<<c[k][n]<<endl;
	}
}

