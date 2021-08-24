#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],b[n],m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		b[0]=a[0];
		m=a[0];
		for(int i=1;i<n;i++)
		{
			b[i]=max(b[i-1]+a[i],a[i]);
			if(m<b[i])m=b[i];
		}
		cout<<m<<endl;
	}
}

