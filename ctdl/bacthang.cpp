#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		map<long long,long long>a;
		long long n,k,tong=1,tong1;
		cin>>n>>k;
		for(int i=2-k-1;i<0;i++)a[i]=0;
		a[0]=a[1]=1;
		for(int i=2;i<=n;i++)
		{
			tong-=a[i-k-1];
			tong=(tong+a[i-1]);
			a[i]=tong%mod;
		}
		cout<<a[n]<<endl;
	}
}

