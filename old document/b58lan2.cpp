#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,a[100005],dem=1;
		memset(a,0,sizeof(a));
		cin>>n;
		a[0]=1;
		a[1]=1;
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				if(n%i==0)dem++;
				for(int j=i*i;j<n;j+=i)
				{
					if(n%i==0&&a[j]==0)dem++;
					a[j]=1;
				}
			}
		}
		if(a[n-dem]==0)cout<<1;
		else cout<<0;
		cout<<endl;
	}
	
}

