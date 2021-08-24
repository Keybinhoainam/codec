#include<bits/stdc++.h>
using namespace std;
long long tim(long long n)
{
	long long kq=1,i=0;
	while(kq<=n)
	{
		kq*=2;
		i++;
	}
	return i-1;
}
long long kt(long long k,long long l,long long r,long long n)
{
	if(n==1)return 1;
	if(n==0)return 0;
	long long c=pow(2,k);
//	if(l<r&&r<c)
//	{
//		return kt(k-1,l,r,n/2);
//	}
	if(r<=c&&l<r) 
	{
		if(r==c)return n%2 +kt(k-1,l,c-1,n/2);
		else return kt(k-1,l,r,n/2);
	}
	if(l>=c&&l<r) 
	{
		if(l==c)return n%2 +kt(k-1,1,r-c,n/2);
		else return kt(k-1,l-c,r-c,n/2);
		
	}
	if(l==r&&l==c)return n%2;
	if(l==r&&l>c)return kt(k-1,l-c,r-c,n/2);
	if(l==r&&r<c)return kt(k-1,l,r,n/2);
	
	return n%2 + kt(k-1,l,c-1,n/2) + kt(k-1,1,r-c,n/2);

}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,l,r;
		cin>>n>>l>>r;
		long long k=tim(n);
		
		cout<<kt(k,l,r,n)<<endl;
	}
}

