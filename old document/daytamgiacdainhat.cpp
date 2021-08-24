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
		int l=0,r=0,kq=0;
		while(l<n&&r<n)
		{
			r=l;
			while(a[r]<a[r+1]&&r<n-1)r++;
			while(a[r]>a[r+1]&&r<n-1)r++;
			kq=max(kq,r-l+1);
			if(r==n-1)break;
//			kq=max(kq,r-l+1);
			if(a[r]==a[r+1])l=++r;
			else l=r;
		}
		cout<<kq<<endl;
	}
}

