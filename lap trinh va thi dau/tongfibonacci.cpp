#include<bits/stdc++.h>
using namespace std;
const long long mod=pow(10,9)+7;
struct matran{
	long long f[2][2];
};
map<int,long long> b;
matran operator*(matran a,matran b)
{
	matran c;
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
			c.f[i][j]=0;
			for(int k=0;k<=1;k++)
			{
				c.f[i][j]=(c.f[i][j]+((a.f[i][k]*b.f[k][j])%mod)%mod);
			}
		}
	}
	return c;
}
matran power(matran a,int n)
{
	if(n==1)return a;
	matran x=power(a,n/2);
	b[n/2+1]=x.f[0][0];
	if(n%2==0)return x*x;
	else return x*x*a;
}
long long fibo(int n)
{
	if(n==0)return 0;
	if(n==1||n==2)return 1;
		matran a;
	a.f[0][0]=1;a.f[0][1]=1;
	a.f[1][0]=1;a.f[1][1]=0;
	matran x=power(a,n-1);
	return x.f[0][0];
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL),cout.tie(NULL);
		int n,m,x1;
		cin>>n>>m;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
			cin>>x1;
			a.push_back(x1);
		}
		int tvan,l,r,x;
		for(int i=0;i<m;i++)
		{
			cin>>tvan;
			if(tvan==1)
			{
				cin>>l>>r>>x;
				for(int i=l-1;i<=r-1;i++)
				{
					a[i]+=x;
				}
			}
			if(tvan==2)
			{
				cin>>l>>r;
				long long tong=0;
				for(int i=l-1;i<=r-1;i++)
				{
					if(b[a[i]]==0&&a[i]>0)
					{
						b[a[i]]=fibo(a[i]);
						tong=(tong+b[a[i]])%mod;
					}
					else tong=(tong+b[a[i]])%mod;
//					cout<<fibo(a[i])<<" ";
//	tong=(tong+fibo(a[i]))%mod;

				}
				cout<<tong<<endl;
//cout<<endl;
			}
		}
		fflush(stdin);
//		cout<<fibo(a[2])<<" ";
//	}
}

