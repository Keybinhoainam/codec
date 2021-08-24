#include<bits/stdc++.h>
using namespace std;
long long a[100000];
int main()
{
	int T;
	cin>>T;
	memset(a,0,sizeof(a));
	a[1]=1;a[0]=1;
	for(int i=2;i*i<=100000;i++)
	{
		for(int j=i*i;j<=100000;j+=i)a[j]=1;
	}
	while(T--)
	{
		long long l,r,dem=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			if(a[i]==0)dem++;
		}
		cout<<dem<<endl;
	}
}

