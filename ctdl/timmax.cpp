#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		long long tong=0;
		for(int i=0;i<n;i++)
		{
			tong=(tong+((a[i]%mod)*i%mod)%mod)%mod;
		}
		cout<<tong<<endl;
	}
}

