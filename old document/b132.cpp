#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long b,p,dem=0,demtong=0;
		cin>>b>>p;
		for(long long i=1;i<p;i++)
		{
			if(i*i%p==1)dem++;
		}
		long long t=b/p;
		demtong+=t*dem;
		long long u=b-t*p;
		for(long long i=1;i<=u;i++)
		{
			if(i*i%p==1)demtong++;
		}
		cout<<demtong<<endl;
		
	}
}

