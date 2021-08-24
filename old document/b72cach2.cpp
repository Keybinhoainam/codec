#include<bits/stdc++.h>
using namespace std;
long long modulo(string n,long long m)
{
	long long tong=0;
	for(long long i=0;i<n.length();i++)
	{
		tong=(tong*10+(int)(n[i]-'0'))%m;
	}
	return tong;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string n;
		long long m;
		cin>>n>>m;
		cout<<modulo(n,m)<<endl;
	}
}

