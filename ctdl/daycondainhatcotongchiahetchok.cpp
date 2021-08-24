#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[100000];
ll db[1005][100],check[1005][100];
//mang db[i][j] la day con dai nhat trong mang tu a[i],a[i+1],...,a[n-1]
//voi tong cua day nay cong j chia het cho k

// xet db[i][j]=max(db[i+1][j],db[i+1][ (j+a[i])%k ]
ll kt(ll i,ll tmp)
{
	if(i==n)
	{
		//chay den cuoi mang neu tmp(so cong vao day) ==0 thi tra ve 0 la nhan.
		if(!tmp)return 0;
		else return -1;
	}
	if(check[i][tmp]==1)return db[i][tmp];
	check[i][tmp]=1;
	ll l=kt(i+1,tmp);
	ll r=kt(i+1,(tmp+a[i])%k);
	db[i][tmp]=l;
	if(r!=-1)
	{
		db[i][tmp]=max(db[i][tmp],r+1);
	}
	return db[i][tmp];
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>a[i];
		memset(check,0,sizeof(check));
		cout<<kt(0,0)<<endl;
	}
}

