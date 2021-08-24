#include<bits/stdc++.h>
using namespace std;
int n,k,t,dem;
string s;
int a[100000];
void kt(int t1,int dem1)
{
	if(dem1<dem&&t1==t-1)
	{
		dem=dem1;
		return;
	}
	for(int i=t1+1;i<=t1+k;i++)
	{
		if(s[a[i]]=='*')
		{
			kt(i,dem1+1);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		cin.ignore();
		getline(cin,s);
		t=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='*')a[t++]=i;
		}
		if(t==0)cout<<0;
		else
		{
			dem=INT_MAX;
			kt(a[0],0);
			cout<<dem+1;
		}
		cout<<endl;
	}
}

