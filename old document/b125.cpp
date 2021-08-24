#include<bits/stdc++.h>
using namespace std;
const long long m=pow(10,9)+7;
long long power(long long a,long long b)
{
	if(b==1)return a;
	long long c=power(a,b/2);
	if(b%2==0)return (c%m*c%m)%m;
	else return ((c%m*c%m)%m*a%m)%m;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5],gcd;
		cin>>a[0];
		gcd=a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			gcd=__gcd(a[i],gcd);
		}
		long long tich=1;
		for(int i=0;i<n;i++)
		{
			tich=(tich%m*power(a[i],gcd)%m)%m;
		}
		cout<<tich<<endl;
	}
}

