#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int n,k;
long long kt()
{
	long long p=1;
	if(k>n)return 0;
	for(int i=n-k+1;i<=n;i++)
	{
		p=((p%mod)*(i%mod))%mod;
	}
	return p;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		cout<<kt()<<endl;
	}
}

