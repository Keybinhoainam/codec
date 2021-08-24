#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long h=2;
int check=0;
map<ll,char>x;
void kt(map<ll,ll>a,ll n,ll m,ll t)
{
	if(t==h*n-1)
	{
		ll kq;
		ll i=1;
		if(x[1]!='*')kq=a[0];
		else kq=0;
		while(i<t)
		{
			if(x[i]=='+'&&x[i+2]!='*')
			{
//				cout<<"+"<<" ";
				ll i2=i+1;
				kq=kq+a[i2];
				i+=2;
//				if(kq>m)break;
			}
			else
			{
				if(x[i]=='-'&&x[i+2]!='*')
				{
//				cout<<"-"<<" ";
					kq-=a[i+1];
					i+=2;
					if(kq>m)break;
				}
				else
				{
					if(x[i]=='*')
					{
//				cout<<"*"<<" ";
						ll kq1=a[i-1];
						ll j=i;
						while(x[j]=='*'&&j<t)
						{
							kq1*=a[j+1];
							j+=2;
						}
						if(x[i-2]=='-')kq1*=-1;
						kq+=kq1;
						i=j; 
//						if(kq>m)break;
					}
					else i+=2;
				}
			}
		}
//		cout<<kq<<endl;
//		cout<<x[1]<<endl;
		if(kq==m)
		{
			check=1;
			int t1=1;
//			if(a[0]>=0)cout<<a[0];
//			else cout<<"("<<a[0]<<")";
			cout<<a[0];
			for(ll i=2;i<h*n;i+=2)
			{
				cout<<x[i-1];
				if(a[i]>=0)cout<<a[i];
			else cout<<"("<<a[i]<<")";
//				t1+=2;
			}
			if(m>=0)cout<<"="<<m<<endl;
			else cout<<"="<<m<<""<<endl;
		}
		return;
	}
	for(int i=0;i<3;i++)
	{
		switch (i)
		{
			case 0:
				x[t]='+';
				if(t<h*n-1)kt(a,n,m,t+2);
				break;
			case 1:
				x[t]='-';
				if(t<h*n-1)kt(a,n,m,t+2);
				break;
			case 2:
				x[t]='*';
				if(t<h*n-1)kt(a,n,m,t+2);
				break;
		}
	}
}
int main()
{
	ll n,m,x;
	cin>>n>>m;
	map<ll,ll>a;
	for(ll i=0;i<h*n;i+=2)
	{
		cin>>x;
		a[i]=x;
	}
	check=0;
	kt(a,n,m,1);
	if(check==0)cout<<" IMPOSSIBLE"<<endl;
}

