#include<bits/stdc++.h>
using namespace std;
long long x[1000005];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,dem=0;;
		cin>>n;
		long long t=sqrt(n);
		memset(x,0,sizeof(x));
		for(long long i=2;i*i<=t;i++)
		{
			if(x[i]==0)
			{
				for(int j=i*i;j<=t;j+=i)x[j]=1;
			}
		}
		for(int i=2;i<=t;i++)
		{
			if(x[i]==0)dem++;
		}
		cout<<dem<<endl;
	}
}

