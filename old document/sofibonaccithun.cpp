#include<iostream>
#include<cmath>
using namespace std;
long long m=pow(10,9)+7;
struct matran{
	long long f[2][2];
};
matran operator *(matran a,matran b)
{
	matran c;
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			c.f[i][j]=0;
			for(int k=0;k<=1;k++)
			{
				c.f[i][j]=(c.f[i][j]+(a.f[i][k]*b.f[k][j])%m)%m;
			}
		}
	}
	return c;
}
matran power(matran a,long long n)
{
	if(n==1)return a;
	matran x=power(a,n/2);
	if(n%2==0)return x*x;
	else return x*x*a;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		if(n>=2)
		{
			matran a;
			a.f[0][0]=1;	a.f[0][1]=1;
			a.f[1][0]=1;	a.f[1][1]=0;
			matran q=power(a,n-1);
			cout<<q.f[0][0]<<endl;
		}
		if(n==1)cout<<1<<endl;
		if(n==0)cout<<0<<endl;
	}
}
