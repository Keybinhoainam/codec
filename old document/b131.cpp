#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],dem=0;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int h=abs(a[0]-a[n-1]);
		for(int i=1;i<=h;i++)
		{
			if(h%i==0)
			{
				int u=a[0]%i,j;
				for( j=1;j<n;j++)
				{
					if(a[j]%i!=u)break;
				}
				if(j==n)dem++;
			}
		}
		cout<<dem<<endl;
	}
}

