#include<bits/stdc++.h>
using namespace std;
int demD(string s,int i)
{
	int j=i+1,dem=0;
	while(s[j]=='D')
	{
		j++;
		dem++;
	}
	return dem;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int i=0;
		while(s[i]=='D')i++;
		int t=-1+2+i;
		cout<<t;
		int a[20];
		for(i=0;i<n;i++)
		{
			if(s[i]=='D')
			{
				if(i==0)a[i]=t-1;
				else a[i]=a[i-1]-1;
			}
			else
			{
				int u=demD(s,i);
				a[i]=i+2+u;

			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}

