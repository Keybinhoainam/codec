#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,a[10005],x[10005];
		memset(x,0,sizeof(x));
		cin>>n;
		for(int i=2;i*i<=n;i++)
		{
			if(x[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)x[j]=1;
			}
		}
		for(int i=2;i<=n/2;i++)
		{
			if(x[i]==0&&x[n-i]==0)
			{
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
}

