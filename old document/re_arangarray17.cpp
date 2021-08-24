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
		map<long long,long long>a;
		int n=s.length();
		for(int i=0;i<n;i++)
		{
			int x=(int)(s[i]-'0');
			a[x]++;
		}
		int check=0;
		for(int i=0;i<10;i++)
		{
			if(a[i]%2==0&&a[i]>0)check=1;
		}
		int max1=0;
		int vtmax=0;
		for(int i=9;i>=0;i--)
			{
				if(a[i]%2!=0&&max1<a[i])
				{
					max1=a[i];
					vtmax=i;
				}
			}
		if(check==0)
		{
			int max12=0;
			int vtmax2=0;
			int b[n],c[n];
			for(int i=9;i>=1;i--)
			{
				if(a[i]%2!=0&&max12<a[i])
				{
					max12=a[i];
					vtmax2=i;
				}
			}
			for(int i=0;i<a[vtmax2];i++)cout<<vtmax2;
		}
		else
		{
			int t=0;
			int b[n];
			int max1=0;
			for(int i=9;i>=0;i--)
			{
				if(a[i]%2==0&&a[i]>0)
				{
					if(max1<i)max1=i;
					if(max1>0)for(int j=0;j<a[i]/2;j++)b[t++]=i;
				}
			}
			for(int i=0;i<a[vtmax]/2;i++)b[t++]=vtmax;
			for(int i=0;i<t;i++)cout<<b[i];
			reverse(b,b+t);
			cout<<vtmax;
			for(int i=0;i<t;i++)cout<<b[i];
		}
		cout<<endl;
	}
}

