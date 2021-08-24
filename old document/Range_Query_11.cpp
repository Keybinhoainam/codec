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
		sort(a,a+n);
		int min1=a[n-1]-a[n-2];
		for(int i=n-1;i>=1;i--)
		{
			if(a[i]-a[i-1]<min1)min1=a[i]-a[i-1];
		}
		cout<<min1<<endl;
	}
}

