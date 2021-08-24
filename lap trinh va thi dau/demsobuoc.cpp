#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		map<long long,long long>a;
		a[0]=a[1]=1;
		long long tong=1;
		for(int i=2;i<=n;i++)
		{
				tong-=a[i-k-1];
				tong+=a[i-1];
				a[i]=tong%mod;
//				if(i<=k)a[i]++;
		}
		cout<<a[n]<<endl;
	}
}

