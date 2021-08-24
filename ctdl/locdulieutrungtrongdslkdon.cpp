#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	map<ll,bool>c;
	map<ll,ll>a;
	ll x,t=1;
	cin>>x;
	a[0]=x;
	c[x]=1;
	while(getchar()!='\n')
	{
		cin>>x;
		if(c[x]==0)
		{
			a[t++]=x;
			c[x]=1;
		}
	}
	for(int i=0;i<t;i++)cout<<a[i]<<" ";

}

