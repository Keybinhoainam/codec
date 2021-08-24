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
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		long long in[n],de[n];
		for(int i=0;i<n;i++)
		{
			in[i]=1;
			de[i]=1;
		}
		for(int i=1;i<n;i++)
		{
			int max1=1;
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i]&&max1<in[j]+1)max1=in[j]+1;
			}
			in[i]=max1;
		}
		for(int i=n-2;i>=0;i--)
		{
			int max1=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i]&&max1<de[j]+1)max1=de[j]+1;
			}
			de[i]=max1;
		}
		long long m=1;
		for(int i=0;i<n;i++)
		{
			if(m<(de[i]+in[i]-1))m=de[i]+in[i]-1;
		}
		cout<<m<<endl;
	}
}

