#include<bits/stdc++.h>
using namespace std;
string s[100000];
bool cop(string s1,string s2)
{
	string u1=s1+s2,u2=s2+s1;
	return u1>u2;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,max1=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n,cop);
		for(int i=0;i<n;i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	}

}

