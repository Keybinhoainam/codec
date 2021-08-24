#include<bits/stdc++.h>
using namespace std;
long long x[10005];
void kt(long long n)
{
	long long dem=0;
	for(int i=2;i<=n;i++)
	{
		if(x[i]==0&&n%i==0)
		{
			dem++;
			n/=i;
		}
	}
	if(dem==3&&n==1)cout<<1;
	else cout<<0;
}
int main()
{
	int T;
	cin>>T;
	memset(x,0,sizeof(x));
	x[0]=1;x[1]=1;
	for(int i=2;i*i<=10005;i++)
	{
		if(x[i]==0)
		{
			for(int j=i*i;j<=10005;j+=i)x[j]=1;
		}
	}
	while(T--)
	{
		long long n;
		cin>>n;
		kt(n);
		cout<<endl;
	}
}

