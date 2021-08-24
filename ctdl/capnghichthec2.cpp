#include<bits/stdc++.h>
using namespace std;
#define ll long long
void update(ll bit[],int n,int i,ll val)
{
	while(i<=n){
		bit[i]+=val;
		i+=i&(-i);
	}
}
ll getsum(ll bit[],int i)
{
	ll sum=0;
	while(i>0)
	{
		sum+=bit[i];
		i-=(i&(-i));
	}
	return sum;
}
void convert(ll a[],int n)
{
	ll tmp[n];
	for(int i=0;i<n;i++)
	{
		tmp[i]=a[i];
	}
	sort(tmp,tmp+n);
	for(int i=0;i<n;i++)
	{
		a[i]=lower_bound(tmp,tmp+n,a[i])-tmp+1;
	}
}
ll kt(ll a[],int n)
{
	ll kq=0, bit[n+1];
	for(int i=1;i<=n;i++)
	{
		bit[i]=0;
	}
	convert(a,n);
	for(int i=n-1;i>=0;i--)
	{
		kq+=getsum(bit,a[i]-1);
		update(bit,n,a[i],1);
	}
	return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<kt(a,n)<<endl;
	}
}

