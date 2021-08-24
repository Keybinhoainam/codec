#include<bits/stdc++.h>
using namespace std;
long long n,k,dem;
long long mod=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
//		sort(a,a+n);
		long long c[k+1];
		memset(c,0,sizeof(c));
		c[0]=1;
		for(long long i=1;i<=k;i++)
		{
//			map<int,bool>check;
			for(int j=0;j<n;j++)
			{
				if(a[j]<=i)
				{
//                    check[a[j]]=1;
					c[i]=(c[i]%mod + c[i-a[j]]%mod)%mod;
				}

			}
		}
		cout<<c[k]<<endl;
	}
}

