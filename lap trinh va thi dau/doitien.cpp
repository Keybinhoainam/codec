#include<bits/stdc++.h>
using namespace std;
long long tong=0,s,dem,check;
void kt(int bd,long long dem1,int a[])
{
	for(int i=bd;i>=0;i--)
	{
		tong+=a[i];
		if(tong==s)
		{
			dem=min(dem,dem1+1);
		}
		else
		{
			if(tong<s)kt(i-1,dem1+1,a);
		}
		tong-=a[i];
	}
}
int main()
{
	int n;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int i=n-1;
	while(a[i]>s&&i>=0)i--;
	dem=n+1;
	kt(i,0,a);
	if(dem==n+1)cout<<-1<<endl;
	else cout<<dem<<endl;
}

