#include<bits/stdc++.h>
using namespace std;
long long nt(long long n)
{
	if(n<2)return 0;
	for(long long i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,p=2;
		cin>>n;
		long long t1=pow(2,p-1),t2=(pow(2,p)-1);
		while(t1*t2<n)
		{
			p++;
			t1=pow(2,p-1);t2=(pow(2,p)-1);
		}
		if(n==t1*t2&&nt(t2)==1)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

