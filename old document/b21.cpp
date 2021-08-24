#include<iostream>
#include<cmath>
using namespace std;
long long m=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,f[1005];
		cin>>n;
		f[1]=1;f[2]=1;
		for(int i=3;i<=n;i++)
		{
			f[i]=(f[i-1]+f[i-2])%m;
		}
		cout<<f[n]<<endl;
	}
}

