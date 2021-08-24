#include<bits/stdc++.h>
using namespace std;
long long f[1000];

void kt(long long n1,long long k1)
{
	if(n1==1)
	{
		cout<<"0";
		return;
	}
	if(n1==2)
	{
		cout<<"1";
		return;
	}
	if(k1<=f[n1-2])kt(n1-2,k1);
	else kt(n1-1,k1-f[n1-2]);
}
int main()
{
	f[0]=0;f[1]=1;
	for(int i=2;i<93;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
//	cout<<f[93]<<"="<<f[92]+f[91];
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		kt(n,k);
		cout<<endl;
	}
}

