#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int l=0,r=n-1,kq=0;
		while(l<=r)
		{
			if(a[l]<a[r])
			{
				a[l+1]=a[l]+a[l+1];
				l++;
				kq++;
			}
			else
			{
				if(a[l]>a[r])
				{
					a[r-1]=a[r-1]+a[r];
					r--;
					kq++;
				}
				else
				{
					l++;r--;
				}
			}
		}
		cout<<kq<<endl;
	}
}

