#include<bits/stdc++.h>
using namespace std;
int test(long long a[],long long n)
{
	int kq=0;
	int so0=0;
	while(1)
	{
		so0=0;
		int i;
		for(i=0;i<n;i++)
		{
			if(a[i]==0)so0++;
			if(a[i]&1)break;
		}
		if(i==n)
		{
			if(so0==n)return kq;
			else
			{
				for(int j=0;j<n;j++)
				{
					a[j]/=2;
				}
				kq++;
			}
		}
		else
		{
			for(int j=i;j<n;j++)
			{
				if(a[j]&1)
				{
					a[j]--;
					kq++;
				}
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<test(a,n)<<endl;
	}
}

