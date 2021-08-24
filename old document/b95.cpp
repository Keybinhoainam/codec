#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,l,r,a[10000],i,dem1=0,dem2=0,check=1,t;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>l>>r;
		
		i=l;
		while(a[i]<=a[i+1]&&i<r-1)i++;
		while(a[i]>=a[i+1]&&i<r)i++;
		if(i==r)cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

