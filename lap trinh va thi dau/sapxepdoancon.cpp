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
		int a[n+5];
		for(int i=1;i<=n;i++)cin>>a[i];
		map<int,int>lmax,rmin;
		lmax[1]=a[1],rmin[n-1]=a[n];
		for(int i=1;i<n;i++)
		{
			lmax[i]=max(lmax[i-1],a[i]);
		}
		for(int i=n-2;i>=1;i--)
		{
			rmin[i]=min(rmin[i+1],a[i+1]);
		}
		int kq[n],k=0;
		for(int i=1;i<n;i++)
		{
			if(lmax[i]<=rmin[i])
			{
				kq[k++]=i;
			}
		}
		cout<<k<<endl;
		for(int i=0;i<k;i++)cout<<kq[i]<<" ";
		cout<<endl;
	}
}

