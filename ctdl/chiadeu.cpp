#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],tb,tong,kq;
void kt(int bd,int dem)
{
	if(dem==k)
	{
		if(bd==n)
		{
			kq++;
		return;
		}
		else
		{
			return;
		}
	}
	int sum=0;
	for(int i=bd;i<n;i++)
	{
//		cout<<i<<"\t";
		sum+=a[i];
		if(sum==tb)
		{
			kt(i+1,dem+1);
		}
	}
}
int main()
{
	
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tong+=a[i];
		}
		kq=0;
		tb=tong/k;
		if(tong%k!=0)cout<<0;
		else 
		{
			kt(0,0);
			cout<<kq;
		}
		cout<<endl;
	
}

