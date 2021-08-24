#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
long long power(int n,int k)
{
	if(k==1)return n;
	long long a=power(n,k/2);
	if(k%2==0)return (a%mod * a%mod)%mod;
	else return ((a%mod * a%mod)%mod *n)%mod;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		cout<<power(n,k)<<endl;
	}
}

