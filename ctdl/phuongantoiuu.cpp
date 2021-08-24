#include<bits/stdc++.h>
using namespace std;
int c[1000],a[1000],x[1000],kq,xopt[1000];
int n,w;
void kt(int i,int tong,int kl)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		tong+=(j*c[i]);
		kl=kl+a[i]*j;
		if(i==n-1&&kq<tong&&kl<=w)
		{
			kq=tong;
			for(int k=0;k<n;k++)
			{
				xopt[k]=x[k];
			}
		}
		else 
		{
			if(i<n-1&&kl<=w)kt(i+1,tong,kl);
		}
		tong-=(j*c[i]);
		kl=kl-a[i]*j;
	}
}
int main()
{
//	ifstream f("data.in");
	
	cin>>n>>w;
	for(int i=0;i<n;i++)cin>>c[i];
	for(int j=0;j<n;j++)cin>>a[j];
//	f.close();
	kq=0;
	kt(0,0,0);
	cout<<kq<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<xopt[i]<<" ";
	}
}

