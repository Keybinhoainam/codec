#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;
long long a[1000000];
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			a[i]=0;
		}
		long long t,u=0;
		for(long long i=0;i<n;i++)
		{
			cin>>t;
			if(t>0)a[u++]=t;
		}
		for(long long i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

