#include<bits/stdc++.h>
using namespace std;
const long long m=pow(10,9)+7;
long long c[1005][1005]={};
int main()
{
	long long T;cin>>T;
	for(long long i=0;i<=1000;i++)
	{
		for(long long j=0;j<=i;j++)
		{
			if(j==0||j==i)c[i][j]=1;
			else
			{
				if(j==1)c[i][j]=i;
			else
			{
				c[i][j]=(c[i-1][j]+c[i-1][j-1])%m;

			}
			}
		}
	}
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}

