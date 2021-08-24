#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],m,kq[n+5]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			kq[i]=0;
		}
		kq[n-1]=a[n-1];
		kq[n-2]=a[n-2];
		kq[n]=0;
		m=max(kq[n-1],kq[n-2]);
		for(int i=n-3;i>=0;i--)
		{
			kq[i]=max(kq[i+2]+a[i],kq[i+3]+a[i]);
			if(kq[i]>m)m=kq[i];
		}
		cout<<m<<endl;
	}
}
