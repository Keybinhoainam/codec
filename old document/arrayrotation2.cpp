#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5]={};
		for(int i=0;i<n;i++)cin>>a[i];
		long long i=0;
		while(a[i+1]>a[i]&&i<n)i++;
		if(i==n-1)cout<<0;
		else cout<<i+1;
		cout<<endl;
	}
}

