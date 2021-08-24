#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		long long l[n],r[n];
		for(int i=0;i<n;i++)cin>>a[i];
		l[0]=a[0];
		for(int i=1;i<n;i++)
		{
			l[i]=a[i];
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i])
				{
					l[i]=max(l[j]+a[i],l[i]);
				}
			}
		}
		r[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--)
		{
			r[i]=a[i];
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					r[i]=max(r[j]+a[i],r[i]);
				}
			}
		}
		long long kq=0;
		for(int i=0;i<n;i++)
		{
			kq=max(kq,l[i]+r[i]-a[i]);
		}
		cout<<kq<<endl;
	}
}

