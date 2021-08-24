#include<bits/stdc++.h>
using namespace std;
int mod4(string s)
{
	int kq;
	for(int i=0;i<s.length();i++)
	{
		kq=((kq*10%4)%4+(int)(s[i]-'0')%4)%4;
	}
	return kq;
}
int mod2(string s)
{
	int kq;
	for(int i=0;i<s.length();i++)
	{
		kq=((kq*10%2)%2+(int)(s[i]-'0')%2)%2;
	}
	return kq;
}
int kt2(string s)
{
	int t=mod4(s);
	if(t==0)return 1;
	if(t==1)return 2;
	if(t==2)return 4;
	if(t==3)return 3;
}
int kt3(string s)
{
	int t=mod4(s);
	if(t==0)return 1;
	if(t==1)return 3;
	if(t==2)return 4;
	if(t==3)return 2;
}
int kt4(string s)
{
	int t=mod2(s);
	if(t==0)return 1;
	if(t==1)return 4;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		cout<<(1+kt2(s)+kt3(s)+kt4(s))%5<<endl;
	}
}

