#include<bits/stdc++.h>
using namespace std;
int kt(int i,long long n,long long a[])
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]<=a[j])return 0;
	}
	return 1;
}
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
		for(int i=0;i<n;i++)
		{
			if(kt(i,n,a)==1)cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

