#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n,k,dem=0;
		cin>>n>>k;
		long long a[n],j=0;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			while(a[i]-a[j]>=k&&i>j)j++;
			dem+=i-j;
		}
		cout<<dem<<endl;
	}
}

