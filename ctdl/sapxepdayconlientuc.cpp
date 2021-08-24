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
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int l=n,r=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				l=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=b[i])
			{
				r=i;
				break;
			}
		}
		if(l<r)cout<<l+1<<" "<<r+1;
		cout<<endl;
	}
}

