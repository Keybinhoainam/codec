#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,q1,q2;
	cin>>n>>q;
	int a[n+1]={0};
//	memset(a,0,sizeof(0));
	for(int i=0;i<q;i++)
	{
		cin>>q1>>q2;
		for(int i=q1;i<=q2;i++)
		{
			a[i]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]%2==0)cout<<0<<" ";
		else cout<<1<<" ";
	}
}
