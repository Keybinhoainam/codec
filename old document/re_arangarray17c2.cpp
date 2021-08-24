#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length();
		map<long long,long long> a;
		for(int i=0;i<n;i++)
		{
			int x=(int)(s[i]-'0');
			a[x]++;
		}
		int b[n],t=0;
		for(int i=9;i>=1;i--)
		{
			if(a[i]%2==0&&a[i]>0)
			{
				for(int j=0;j<a[i]/2;j++)b[t++]=i;
			}
		}
		if(a[0]%2==0&&a[0]>0&&t>0)
		{
			for(int j=0;j<a[0]/2;j++)b[t++]=0;
		}
		if(t==0)
		{
			int max1=0,vt=0;
			for(int i=9;i>=1;i--)
			{
				if(a[i]%2!=0)
				{
					if(max1<a[i])
					{
						max1=a[i];
						vt=i;
					}
				}
			}
			for(int j=0;j<a[vt];j++)cout<<vt;
		}
		else
		{
			for(int i=0;i<t;i++)cout<<b[i];
			int max1=-1,vt=-1;
			for(int i=9;i>=0;i--)
			{
				if(a[i]%2!=0)
				{
					if(max1<a[i])
					{
						max1=a[i];
						vt=i;
					}
				}
			}
			if(max1>=0)
			{
				for(int j=0;j<a[vt];j++)cout<<vt;
			}
			reverse(b,b+t);
			for(int i=0;i<t;i++)cout<<b[i];
		}
		
		cout<<endl;
		
	}
}

