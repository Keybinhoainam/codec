#include<bits/stdc++.h>
using namespace std;
bool comp(string s1,string s2)
{
	string x1=s1+s2,x2=s2+s1;
	return x1>x2;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)cin>>s[i];
		sort(s,s+n,comp);
		for(int i=0;i<n;i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
}

