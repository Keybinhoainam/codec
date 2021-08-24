#include<bits/stdc++.h>
using namespace std;
int kt(long long a[],long long n)
{
	long long rmax[n],lmin[n];
	rmax[n-1]=a[n-1];lmin[0]=a[0];
	for(int i=1;i<n;i++)
	{
		lmin[i]=min(lmin[i-1],a[i]);
	}
	for(int i=n-2;i>=0;i--)
	{
		rmax[i]=max(rmax[i+1],a[i]);
	}
	int l=0,r=0,kq=-1;
	while(l<n&&r<n)
	{
		if(lmin[l]<rmax[r])
		{
			kq=max(kq,r-l);
			r++;
		}
		else l++;
	}
	return kq;
}
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
		cout<<kt(a,n)<<endl;
	}
}

