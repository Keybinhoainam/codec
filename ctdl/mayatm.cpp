#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll max1,c,n,s,sum,cbest;
void kt(int k,ll t[])
{
	if(c+(s-sum)/max1>cbest)return;
	for(int i=0;i<=1;i++)
	{
		sum+=i*t[k];
		c+=i;
		if(k==n-1)
		{
			if(sum==s&&c<cbest)cbest=c;
		}
		else
		{
			if(sum<=s)kt(k+1,t);
		}
		sum-=i*t[k];
		c-=i;
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		
		cin>>n>>s;
		long long t[n];
		max1=0;
		for(int i=0;i<n;i++)
		{
			cin>>t[i];
			if(max1<t[i])max1=t[i];
		}
		c=0;sum=0;
		cbest=INT_MAX;
		kt(0,t);
		if(cbest==INT_MAX)cout<<-1;
		else cout<<cbest;
		cout<<endl;
	}
}

