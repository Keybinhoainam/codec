#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int in[n],de[n];
		in[0]=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1])in[i]=in[i-1]+1;
			else in[i]=1;
		}
		de[n-1]=1;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>a[i+1])de[i]=de[i+1]+1;
			else de[i]=1;
		}
		int kq=0;
		for(int i=0;i<n;i++)
		{
			kq=max(kq,in[i]+de[i]-1);
		}
		cout<<kq<<endl;
	}
}

