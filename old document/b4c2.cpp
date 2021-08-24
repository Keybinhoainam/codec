#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i,j,u=0;
		cin>>n;
		vector<long long> a(1005);
		vector<long long> t(1005);
		for(i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(j=i*i;j<=n;j+=i)
				{
					a[j]=1;
				}
			}
		}
		for(i=2;i<=n;i++)
		{
			if(a[i]==0)t[u++]=i;
		}
		long long u1=0;
		while(u1<u&&n>1)
		{
			if(n%t[u1]==0)
			{
				n/=t[u1];
				cout<<t[u1]<<" ";
			}
			else u1++;
		}
		cout<<endl;
	}
}

