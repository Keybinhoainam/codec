#include<bits/stdc++.h>
using namespace std;
long long m=pow(10,9)+7;
long long kt(long long a[],long long n)
{
	map<long long, long long>b,c;
		for(int i=0;i<n;i++)
		{
			b[a[i]]=n-a[i];
		}
	long long kq=1;
	for(int i=n-1;i>=0;i--)
	{
		c[a[i]]=b[a[i]];
		c[a[i]]-=(n-1-i);
		if(c[a[i]]<=0)return 0;
		else
		{
			kq=(kq%m*c[a[i]]%m)%m;
//			b[a[i]]-=(n-1-i);
//			int j=i;
//			while(a[i]>=0)
//			{
//				b[a[i]]--;
//				a[i]--;
//			}
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
		long long n;
		cin>>n;
		long long a[n];
//		map<long long, long long>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
//			b[a[i]]=n-a[i];
		}
		sort(a,a+n);
		cout<<kt(a,n)<<endl;
	}
}

