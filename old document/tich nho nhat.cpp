#include<bits/stdc++.h>
using namespace std;
long long tichnn(long long a,long long b,long long x,long long y,long long n)
{
	int t1=a-x,t2=b-y;
	if(t1>n)return (a-n)*b;
	else
	{
		if(t2<n-t1)return x*y;
		else return x*(b-(n-t1));
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		long long kq=tichnn(a,b,x,y,n);
		if(kq>tichnn(b,a,y,x,n))kq=tichnn(b,a,y,x,n);
		cout<<kq<<endl;
	}
}

