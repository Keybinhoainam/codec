#include<bits/stdc++.h>
using namespace std;
long long modulo(long long a,string b)
{
	long long tong=0;
	for(int i=0;i<b.length();i++)
	{
		tong=(tong*10+(int)(b[i]-'0'))%a;
	}
	return tong;
}
long long gcd(long long a,string b)
{
	long long b2=modulo(a,b);
	while(b2>0)
	{
		long long tmp=a%b2;
		a=b2;
		b2=tmp;
	}
	return a;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long a;
		string b;
		cin>>a>>b;
		cout<<gcd(a,b)<<endl;
	}
}

