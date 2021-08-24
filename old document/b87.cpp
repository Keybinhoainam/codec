#include<bits/stdc++.h>
using namespace std;
//long long max3(long long a,long long b,long long c)
//{
//	long long max1=a;
//	if(max1<b)max1=b;
//	if(max1<c)max1=c;
//	return max1;
//}
//long long min3(long long a,long long b,long long c)
//{
//	long long min1=a;
//	if(min1>b)min1=b;
//	if(min1>c)min1=c;
//	return min1;
//}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+2];
		for(long long i=0;i<n;i++)cin>>a[i];
		long long kq=a[0],smax=a[0],smin=a[0],t1,t2;
		for(long long i=1;i<n;i++)
		{
			t1=smax*a[i];
			t2=smin*a[i];
			smax=max(a[i],max(t1,t2));
			smin=min(a[i],min(t1,t2));
			if(smax>kq)kq=smax;
		}
		cout<<kq<<endl;
	}
}

