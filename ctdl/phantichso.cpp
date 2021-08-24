#include<bits/stdc++.h>
using namespace std;
#define ll long long
void kt(ll n,ll t,ll a[],ll tong)
{
	for(int i=a[t-1];i>=1;i--)
	{
		if(i<=tong)
		{
			a[t]=i;
			if(tong-i==0)
			{
				cout<<"(";
				for(int k=1;k<=t;k++)
				{
					if(k<t)cout<<a[k]<<" ";
					else cout<<a[k];
				}
				cout<<") ";
			}
			else 
			{
				kt(n,t+1,a,tong-i);
			}
		}
	}	
}
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll a[n+5];
		a[0]=n;
		kt(n,1,a,n);
		cout<<endl;
	//	(4) (3 1) (2 2) (2 1 1) (1 1 1 1)
	}
}

