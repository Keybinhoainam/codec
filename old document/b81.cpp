#include<bits/stdc++.h>
using namespace std;
long long n,k;

void kt(long long a[],long long &vtl,long long &vtr,long long dem)
{
		long long i=0,j,dem1;
		while(i<n)
		{
			dem1=0;
			while(a[i]>k&&i<n)i++;
			if(i<n)
			{
				j=i;
				while(a[j]<=k&&j<n)
				{
					dem1++;
					j++;
				}
				if(dem1>dem)
				{
					dem=dem1;
					vtl=i;
					vtr=j-1;
				}
				i=j-1;
			}
		}
}
void test(long long a[],long long vtd,long long vtc,long long &dem)
{
	long long i=vtd,j=vtc;
	while(i<j)
	{
		while(a[i]>k&&i<j)i++;
		while(a[j]<=k&&i<j)j--;
		if(i<j)
		{
			swap(a[i],a[j]);
			dem++;
		}
		i++;
		j--;
	}
}
void test2(long long a[],long long vtd,long long vtc,long long &dem)
{
	long long i=vtd,j=vtc;
	while(i<j)
	{
		while(a[i]<=k&&i<j)i++;
		while(a[j]>k&&i<j)j--;
		if(i<j)
		{
			swap(a[i],a[j]);
			dem++;
		}
		i++;
		j--;
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long i,j,vtl,vtr,dem=0;
		cin>>n>>k;
//		a=new long long [n+5];
long long a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		kt(a,vtl,vtr,0);
		test(a,0,vtl,dem);
		test2(a,vtr,n-1,dem);
		cout<<dem<<endl;
////		delete[] a;
	}
}
