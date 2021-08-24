#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long k,dem;
void kt(long long tb,long long a[],ll bd,ll k1,ll n)
{
//	if(k1==k&&bd==n)
//	{
//		dem++;
////		return;
//	}
	long long tong=0;
	for(int i=bd;i<n;i++)
	{
		tong+=a[i];
		if(tong==tb)
		{
			if(k1<k)kt(tb,a,i+1,k1+1,n);
			else 
			{
				if(k1==k&&i==n-1)dem++;
			}
		}
//		else
//		{
//			if(tong>tb)return;
//		}
	}
}
int main()
{
	ll n;
	cin>>n>>k;
	ll a[n];
	long long tong=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tong+=a[i];
	}
	long long tb=tong/k;
	dem=0;
	kt(tb,a,0,1,n);
	cout<<dem<<endl;
}

