#include<bits/stdc++.h>
using namespace std;
int check;
void kt(int n,int k,int a[],long long tong,int b[],int t,map<int,bool> c,int bd)
{
	if(tong==k)
	{
		check=1;
		cout<<"[";
		for(int i=0;i<t;i++)
		{
			if(i<t-1)cout<<b[i]<<" ";
			else cout<<b[i];
		}
		cout<<"] ";
	}
	for(int i=bd;i<n;i++)
	{
		if(tong+a[i]<=k)
		{
			b[t]=a[i];
			kt(n,k,a,tong+a[i],b,t+1,c,i+1);
			c[a[i]]=0;
		}
		else 
		{
			if(tong+a[i]>k)break;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		check=0;
		map<int,bool> c;
		kt(n,k,a,0,b,0,c,0);
		if(check==0)cout<<-1;
		cout<<endl;
	}
}

