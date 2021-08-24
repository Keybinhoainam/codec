#include<bits/stdc++.h>
using namespace std;
int dem;
int x[100];
void kt1(int n,int t)
{
	if(n==0)
	{
		dem++;
		return;
	}
	for(int i=n;i>=1;i--)
	{
		if(i<=x[t-1])
		{
			x[t]=i;
		kt1(n-i,t+1);
		}
	}
}
void kt(int n,int t)
{
	if(n==0)
	{
		cout<<"("<<x[1];
		for(int i=2;i<t;i++)
		{
			cout<<" "<<x[i];
		}
		cout<<") ";
		return;
	}
	for(int i=n;i>=1;i--)
	{
		if(i<=x[t-1])
		{
			x[t]=i;
		kt(n-i,t+1);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		dem=0;
		cin>>n;
		x[0]=INT_MAX;
//		cout<<"("<<4<<") ";
		kt1(n,1);
		cout<<dem<<endl;
		kt(n,1);
		cout<<endl;
	}
}

