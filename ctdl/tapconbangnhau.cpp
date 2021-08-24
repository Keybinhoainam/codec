#include<bits/stdc++.h>
using namespace std;
int check;
void kt(int n,int a[],long long tong,map<int,bool> c)
{
	if(tong==0)
	{
		check=1;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(c[i]==0&&tong-a[i]>=0&&check==0)
			{
				c[i]=1;
				kt(n,a,tong-a[i],c);
				c[i]=0;
			}
			else
			{
				if(tong-a[i]<0||check==1)break;
			}
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
		cin>>n;
		int a[n];
		long long tong=0,tong1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tong+=a[i];
		}
		sort(a,a+n);
		check=0;
		map<int,bool> c;
		if(tong%2==0)kt(n,a,tong/2,c);
		if(check==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

