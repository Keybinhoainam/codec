#include<bits/stdc++.h>
using namespace std;
long long tcs(string s)
{
	string s1;
	long long tong=0;
	for(int i=0;i<s.length();i++)
	{
		tong+=(int)(s[i]-48);
	}
	return tong;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long a=tcs(s);
		if(a%9==0&&a!=0)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

