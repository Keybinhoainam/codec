#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x,j,check=0;
		cin>>n>>x;
		long long a[n+5],b[100000]={},t=0,c[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]-x>0&&b[a[i]]==0)
			{
				c[t++]=a[i]-x;
				b[a[i]]=1;
			}
		}
		long long *it;
		for(int i=0;i<t;i++)
		{
			it=find(a,a+n,c[i]);
			if(it!=a+n)
			{
				check=1;
				cout<<1;
				break;
			}
			it=find(a,a+n,c[n-1-i]);
			if(it!=a+n)
			{
				check=1;
				cout<<1;
				break;
			}
		}
		if(check==0)cout<<-1;
		cout<<endl;
	}
}

