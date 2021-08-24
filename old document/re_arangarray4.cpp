#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		long long l=0,r=(n%2==0)?n/2:(n/2+1);
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)cout<<a[r++]<<" ";
			else cout<<a[l++]<<" ";
		}
		cout<<endl;
	}
}

