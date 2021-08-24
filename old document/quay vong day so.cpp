#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,d;
		cin>>n>>d;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=d;i<n;i++)cout<<a[i]<<" ";
		for(int i=0;i<d;i++)cout<<a[i]<<" ";
		cout<<endl;
	}
}

