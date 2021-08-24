#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[10][105],mod=pow(10,9)+7;
ll tinh(int bd,int n)
{
	if(n==0)return 1;
	if(f[bd][n])
	{
//		cout<<bd<<" "<<n<<" "<<f[bd][n]<<endl;
		return f[bd][n];
	}
	ll kq=0;
	for(int i=bd;i<10;i++)
	{
		if(f[i][n-1])kq=(kq%mod+f[i][n-1]%mod)%mod;
		else kq=(kq%mod+tinh(i,n-1)%mod)%mod;
	}
	f[bd][n]=kq;
//	cout<<bd<<" "<<n<<" "<<f[bd][n]<<endl;
	return kq;
}
ll kt(int n)
{
	if(n==1)return 10;
	return tinh(0,n);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<<kt(n)<<endl;
	}
}

