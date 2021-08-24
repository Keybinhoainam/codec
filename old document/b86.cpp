#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,a[100000];
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<a[0]*a[1]<<" ";
		for(int i=1;i<n-1;i++)
		{
			cout<<a[i-1]*a[i+1]<<" ";
		}
		cout<<a[n-1]*a[n-2];
		cout<<endl;
	}
}

