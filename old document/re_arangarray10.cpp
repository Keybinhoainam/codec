#include<bits/stdc++.h>
using namespace std;
int demd(int i,string s)
{
	int dem=0;
	while(i<s.length()&&s[i]=='D')
	{
		i++;
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
		long long a[n+5];
		a[0]=demd(0,s)+1;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='D')a[i+1]=a[i]-1;
			if(s[i]=='I')a[i+1]=demd(i+1,s)+i+2;
		}
		for(int i=0;i<=n;i++)cout<<a[i];
		cout<<endl;
	}
}

