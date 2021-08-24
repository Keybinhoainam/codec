#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=123456789;
ll power(ll n)
{
	if(n==1)return 2;
	ll x=power(n/2);
	if(n%2==0)return ((x%mod)*(x%mod))%mod;
	else return (((x%mod)*(x%mod))%mod *2)%mod;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		n--;
		// neu bieu dien so n thanh n so 1 
		//thi so day co tong bang n la cach chon k vi tri trong n vitri 
		//suy ra (n-1)C1+(n-1)C2+...+(n-1)C(n-1)=2^n
		cout<<power(n)<<endl;
	}
}

