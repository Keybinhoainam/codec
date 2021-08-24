#include<bits/stdc++.h>
using namespace std;
long long kt(string s)
{
	if(s[0]=='0')return 0;
	map<long long,long long>a;
	a[0]=1;a[1]=1;
	for(int i=2;i<=s.length();i++)
	{
		if(s[i-1]>'0')
		{
			a[i]=a[i-1];
		}
		if(s[i-2]=='1'||s[i-2]=='2'&&s[i-1]<='6')
		{
			a[i]+=a[i-2];
		}
	}
	return a[s.length()];
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		cout<<kt(s)<<endl;
	}
}

