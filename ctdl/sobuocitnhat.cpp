#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		long long kq=1;
	map<long long,long long>c;
	c[0]=1;
	for(int i=1;i<n;i++)
	{
		c[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				c[i]=max(c[j]+1,c[i]);
			}
		}
		kq=max(kq,c[i]);
	}
		cout<<n-kq<<endl;
	}
}

