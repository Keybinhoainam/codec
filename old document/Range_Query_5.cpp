#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],f[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			f[i]=n;
		}
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>0)
			{
				if(a[i]>=n-1-i)f[i]=1;
				else
				{
					int min1=n;
					for(int j=i+1;j<n-1&&j<=a[i]+i;j++)
					{
						if(min1>f[j])min1=f[j];
					}
					if(min1!=n)f[i]=min1+1;
					else f[i]=min1;
				}
			}
		}
		if(f[0]<n)cout<<f[0]<<endl;
		else cout<<-1<<endl;
		
	}
}

