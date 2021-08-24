#include<bits/stdc++.h>
using namespace std;
long long ms=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,m,max1,min1;
		cin>>n>>m;
		long long a[n+m+10][m+n+10];
		for(int i=0;i<=n+m;i++)a[0][i]=1;
		for(int i=1;i<=n+m;i++)
		{	a[i][i]=1;
			for(int j=1;j<i;j++)
			{
				a[j][i]=(a[j][i-1]+a[j-1][i-1])%ms;
			}
		}
		cout<<a[n][n+m]<<endl;
//cout<<a[n][m ]<<endl;
	}
}

