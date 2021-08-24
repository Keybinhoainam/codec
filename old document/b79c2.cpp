#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100]={},ok;
void xuat()
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void kt(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)xuat();
		else kt(i+1);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		kt(1);
		cout<<endl;
	}
}

