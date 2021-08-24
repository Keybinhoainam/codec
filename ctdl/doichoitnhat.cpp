#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll kt()
{
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll kq=0;
	for(int i=0;i<n-1;i++)
	{
		int min1=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min1])min1=j;
		}
		if(min1!=i)
		{
			kq++;
			swap(a[i],a[min1]);
		}
	}
	return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cout<<kt()<<endl;
	}
}

