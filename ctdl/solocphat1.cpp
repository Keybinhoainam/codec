#include<bits/stdc++.h>
using namespace std;
long long dem;

void kt(int i,int n,string s,string c[])
{
	for(int j=0;j<=1;j++)
	{
		if(j==0)
		{
			s=s+'6';
			if(i==n)
			{
				c[dem]=s;
				dem++;
//				cout<<s<<" ";
			}
			else kt(i+1,n,s,c);
			s.erase(i-1,1);
		}
		else
		{
			s=s+'8';
			if(i==n)
			{
				c[dem]=s;
//				cout<<s<<" ";
				dem++;
			}
			else kt(i+1,n,s,c);
			s.erase(i-1,1);
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
		string s;
		dem=0;
		string c[100000];
		for(int i=1;i<=n;i++)
		{
				string s;
			kt(1,i,s,c);
		}
//		cout<<dem<<endl;
		for(int i=dem-1;i>=0;i--)cout<<c[i]<<" ";
		cout<<endl;
	}
}

