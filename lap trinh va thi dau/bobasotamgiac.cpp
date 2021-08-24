#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,t,kq,dem;
ll a1[3],a[3],a2[3];
void kt(int t1)
{
	for(int i=1;i<=n;i++)
	{
		a[t1]=i;
		if(t1==2)
		{
			if(a[0]+a[1]>a[2]&&a[0]+a[2]>a[1]&&a[1]+a[2]>a[0])
			{
				dem++;
				if(dem==t)
				{
					for(int j=0;j<3;j++)a2[j]=a[j];
				}
				if(a[0]==a1[0]&&a[1]==a1[1]&&a[2]==a1[2])kq=dem;
				
			}
		}
		else
		{
			kt(t1+1);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>t;
		for(int i=0;i<3;i++)cin>>a1[i];
		dem=0;
		kt(0);
		cout<<dem<<endl;
		for(int i=0;i<3;i++)cout<<a2[i]<<" ";
		cout<<endl<<kq<<endl;
	}
}

