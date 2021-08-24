#include<bits/stdc++.h>
using namespace std;
int kt(int n)
{
	int t;
	
	while(n>0)
	{
		t=n%10;
		if(t!=2&&t!=3&&t!=5&&t!=7)return 0;
		n/=10;
	}
	return 1;
}
int kt2(int n)
{
	int t,tong=0;
	
	while(n>0)
	{
		t=n%10;
		tong+=t;
		n/=10;
	}
	return tong;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long l,r;
		cin>>l>>r;
		int check[r+5];
		check[0]=check[1]=0;
		for(int i=2;i<=r;i++)check[i]=1;
		for(int i=2;i*i<=r;i++)
		{
			if(check[i]==1)
			{
				for(int j=i*i;j<=r;j+=i)check[j]=0;
			}
		}
		int dem=0;
		for(int i=l;i<=r;i++)
		{
//			cout<<i<<" ";
			if(check[i]==1&&kt(i)==1&&check[kt2(i)]==1)
			{
				dem++;
//				cout<<i;
			}
//			cout<<endl;
		}
		cout<<dem<<endl;
	}
}

