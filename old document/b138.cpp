#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long sum[1005];
		long long kq=a[0];
		sum[0]=a[0];
		for(int i=1;i<n;i++)
		{
			sum[i]=a[i];
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					sum[i]=max(sum[j]+a[i],sum[i]);
				}
			}
			kq=max(kq,sum[i]);
		}
		cout<<kq<<endl;	
	}
}
