#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x,max1=1,min1=1000,a[100000],dem=0;
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(max1<x)max1=x;
			if(min1>x)min1=x;
			a[x]=1;
		}
		for(int i=min1;i<=max1;i++)
		{
			if(a[i]==0)dem++;
		}
		cout<<dem<<endl;
	}
}

