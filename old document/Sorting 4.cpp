#include<bits/stdc++.h>
using namespace std;
long long kt(long long a[],long long b[],long long n)
{
	sort(a,a+n);
		sort(b,b+n);
		for(int i=n-1;i>=0;i--)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i]==b[j])return 1;
			}
		}
		return -1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x;
		cin >> n >> x;
		long long a[n],b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i]=a[i]+x;
		}
		cout<<kt(a,b,n)<<endl;
		
	}
}

