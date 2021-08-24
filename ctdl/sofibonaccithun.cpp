#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
struct matran{
	long long f[2][2];
};
matran operator*(matran a,matran b)
{
	matran c;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			c.f[i][j]=0;
			for(int k=0;k<2;k++)
			{
				c.f[i][j]=(c.f[i][j]+ a.f[i][k]*b.f[k][j])%mod;
			}
		}
	}
	return c;
}
matran power(matran a,int n)
{
	if(n==1)return a;
	matran b=power(a,n/2);
	if(n%2==0)return b*b;
	else return a*b*b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		matran a;
		a.f[0][0]=1;a.f[0][1]=1;
		a.f[1][0]=1;a.f[1][1]=0;
		matran b=power(a,n-1);
		cout<<b.f[0][0]<<endl;
	}
}

