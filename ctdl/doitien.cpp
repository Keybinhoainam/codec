#include<bits/stdc++.h>
using namespace std;
long long dem=0;
void kt(int n,int a[])
{
//	while(n>0)
//	{
	for(int i=9;i>=0;i--)
	{
		if(a[i]<=n)
		{
//			cout<<a[i]<<" ";
			dem+=(n/a[i]);
			n=n-(n/a[i])*a[i];
		}
	}
//	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		dem=0;
		int a[15];
		a[0]=1;a[1]=2;a[2]=5;a[3]=10;a[4]=20;a[5]=50;a[6]=100;
		a[7]=200;a[8]=500;a[9]=1000;
		kt(n,a);
		cout<<dem<<endl;
	}
}

