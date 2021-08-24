#include<bits/stdc++.h>
using namespace std;
long long a[100000],b[100000];
bool comp(int i,int j)
{
	return a[i]-b[i]<a[j]-b[j];
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		long long n,k;
		cin>>n>>k;
		long long c[n];
		long long tong=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			c[i]=i;
		}
		sort(c,c+n,comp);
		int dem=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]-b[i]<0)dem++;
		}
//		sort(b,b+n,comp);
		if(dem>k)k=dem;
		for(int i=0;i<k;i++)
		{
			tong+=a[c[i]];
		}
		for(int i=k;i<n;i++)tong+=b[c[i]];
		cout<<tong;
//	}
}

