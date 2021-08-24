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
		int l,r;
		cin>>l>>r;
		int i=l;
		while(a[i]<=a[i+1]&&i<=r-1)i++;
		while(a[i]>=a[i+1]&&i<=r-1)i++;
		if(i==r)cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

