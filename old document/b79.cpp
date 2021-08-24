#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100],ok;
void xuat()
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long i;
		ok=1;
		cin>>n>>k;
		for(i=1;i<=k;i++)
		{
			a[i]=i;
		}
		xuat();
		while(ok)
		{
			i=k;
			while(i>0&&a[i]==n-k+i)i--;
			if(i>0)
			{
				a[i]=a[i]+1;
				for(int j=i+1;j<=k;j++)a[j]=a[i]+j-i;
				xuat();
			}
			else ok=0;
		}
		cout<<endl;
	}
}

