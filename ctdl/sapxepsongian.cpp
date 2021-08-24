#include<bits/stdc++.h>
using namespace std;

int kt2(int a[],int b[],int n,int i,int j,map<pair<int,int>,int>res)
{
	pair<int,int>key={i,j};
	if(a==b)return 0;
	if(i>=n||j>=n)return 0;
	if(res.find(key)!=res.end())return res[key];
	if(a[i]<b[j])
	{
		return 1+kt2(a,b,n,i+1,j+1,res);
//		res[i][j]=1+res[i+1][j+1];
	}
	
		int t1=kt2(a,b,n,i+1,j,res);
		int t2=kt2(a,b,n,i,j+1,res);
		res[key]= max(t1,t2);
		return res[key];
}
int kt(int n,int a[])
{
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	sort(b,b+n);
	int f=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]!=a[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)return 0;
	else
	{
//		memset(res,-1,sizeof(res));
		map<pair<int,int>,int>res;
		return n-kt2(b,a,n,0,0,res);
	}
}
int main()
{
//	int T;cin>>T;
//	while(T--)
//	{
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<kt(n,a)<<endl;
//	}
}

