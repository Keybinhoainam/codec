#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long a[n+5],b[n+5]={},m,vtl=n-k+1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(i>=n-k+1)b[n-k+1]+=a[i];
		}
		m=b[n-k+1];
		for(int i=n-k;i>0;i--)
		{
			b[i]=b[i+1]+a[i]-a[i+k];
			if(m<b[i])
			{
				m=b[i];
				vtl=i;
			}
		}
		for(int i=vtl;i<vtl+k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}

