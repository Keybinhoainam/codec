#include<bits/stdc++.h>
using namespace std;
long long m=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long c[k+5][k+5],gt[k+5];
		for(int i=0;i<=k;i++)
		{
			c[0][i]=1;
			if(i==0)gt[i]=1;
			else gt[i]=(gt[i-1]%m*i)%m;
		}
		for(int i=1;i<k;i++)
		{
			c[i][i]=1;
			for(int j=1;j<i;j++)
			{
				c[j][i]=(c[j-1]+c[j][i-1])%m;
			}
		}
		
		long long tong=0;
		for(int i=0;i<k;i++)
		{
			tong=(tong+((c[k-i][k]*gt[k-i])%m*c[k-i+1][n+1]))
		}
		cout<<tong<<endl;
	}
}

