#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	map<int,int>max1,min1;
	max1[0]=a[0];
	min1[n-1]=a[n-1];
	for(int i=1;i<n;i++)
	{
		max1[i]=max(max1[i-1],a[i]);
	}
	for(int i=n-2;i>=0;i--)
	{
		min1[i]=min(min1[i+1],a[i]);
	}
	int kq=0;
	for(int i=0;i<n-1;i++)
	{
		if(max1[i]>min1[i+1])
		{
			kq=max(kq,max1[i]-min1[i+1]);
		}
	}
	if(kq==0)cout<<"Lo nang roi!";
	else cout<<kq;
	cout<<endl;
}

