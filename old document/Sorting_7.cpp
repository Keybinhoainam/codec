#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int l=0,r=n-1;
		while(a[l]==b[l]&&l<r)l++;
		while(a[r]==b[r]&&r>l)r--;
		cout<<l+1<<" "<<r+1;
		cout<<endl;
	}
}

