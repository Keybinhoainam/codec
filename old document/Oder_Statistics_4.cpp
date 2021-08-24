#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],b[n],kq=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
			if(kq<a[i])kq=a[i];
		}
		if(n>=2)b[2]=b[0]+b[2];
		if(n>=2&&kq<a[0]+a[2])kq=a[0]+a[2];
		for(int i=3;i<n;i++)
		{
			b[i]=max(b[i-2]+a[i],b[i-3]+a[i]);
			if(kq<b[i])kq=b[i];
		}
		cout<<kq<<endl;
	}
}

