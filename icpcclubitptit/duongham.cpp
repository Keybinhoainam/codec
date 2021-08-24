#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n],x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
//		a[i].second=i;
	}
	int j=0,kq=0;
	map<int,int>c;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		while(c[a[j]]==1)j++;
		if(a[j]!=b[i]&&c[b[i]]==0)
		{
			kq++;
			c[b[i]]=1;
		}
		if(a[j]==b[i])j++;
	}
	cout<<kq;
}

