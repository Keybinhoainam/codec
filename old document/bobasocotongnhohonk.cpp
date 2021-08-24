#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,K;
		cin>>n>>K;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		long long l,r,kq=0;
		for( int i=0;i<n-2;i++)
		{
			l=i+1;
			r=n-1;
			while(l<r)
			{
				if(a[i]+a[l]+a[r]<K)
				{
					kq+=r-l;
					l++;
				}
				else r--;
			}
		}
		cout<<kq<<endl;
		
	}
	
}

