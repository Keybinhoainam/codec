#include<bits/stdc++.h>
using namespace std;
int nt(long long n)
{
	if(n==0||n==1)return 0;
	for(int i=2;i*i<=n;i++)
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
		long long n,check=0;
		cin>>n;
		for(long long i=0;i<=n/2;i++)
		{
			if(nt(i)==1&&nt(n-i)==1)
			{
				check=1;
				cout<<i<<" "<<n-i;
				break;
			}
		}
		if(check==0)cout<<-1;
		cout<<endl;
	}
}

