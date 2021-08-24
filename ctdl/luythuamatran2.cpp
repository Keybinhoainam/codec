#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
struct matran{
	long long f[20][20];
};
int n;
matran operator*(matran a,matran b)
{
	matran c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c.f[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c.f[i][j]=(c.f[i][j]+((a.f[i][k]*b.f[k][j])%mod)%mod)%mod;
			}
		}
	}
	return c;
}
matran power(matran a,int k)
{
	if(k==1)return a;
	matran b=power(a,k/2);
	if(k%2==0)return b*b;
	else return a*b*b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		cin>>n>>k;
		matran a;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a.f[i][j];
			}
		}
		matran b=power(a,k);
		long long kq=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					kq=(kq%mod + b.f[i][j]%mod )%mod;
				}
			}
		}
		cout<<kq<<endl;
	}
}

