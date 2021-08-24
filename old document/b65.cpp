#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long m,n,a[10005];
		cin>>m>>n;
		memset(a,0,sizeof(a));
		a[0]=1;a[1]=1;
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)a[j]=1;
			}
		}
		for(int i=m;i<=n;i++)
		{
			if(a[i]==0)cout<<i<<" ";
		}
		cout<<endl;
	}
}

