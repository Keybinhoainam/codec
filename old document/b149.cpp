#include<bits/stdc++.h>
using namespace std;
string sum(string s1,string s2)
{
	if(s1.length()<s2.length())
	{
		swap(s1,s2);
	}
	string s3;
	int n1=s1.length(),n2=s2.length(),no=0,kq;
	for(int i=0;i<n2;i++)
	{
		int t=(s1[n1-i-1]-'0')+(s2[n2-i-1]-'0')+no;
		kq=t%10;
		s3=(char)(kq+'0')+s3;
		no=t/10;
	}
	for(int i=n2;i<n1;i++)
	{
		int t=(s1[n1-i-1]-'0')+no;
		kq=t%10;
		s3=(char)(kq+'0')+s3;
		no=t/10;
	}
	if(no>0)s3=(char)(no+'0')+s3;
	return s3;
}
bool checkss(string s,int bg,int len1,int len2)
{
	string s1=s.substr(bg,len1);
	string s2=s.substr(bg+len1,len2);
	string s3=sum(s1,s2);
	int len3=s3.length();
	
	if(bg+len1+len2+len3>s.length())return false;
	if(s3==s.substr(bg+len1+len2,len3))
	{
		if(bg+len1+len2+len3==s.length())return true;
		else
		{
			return checkss(s,bg+len1,len2,len3);
		}
	}
	return false;
}
bool kq(string s)
{
	for(int i=1;i<s.length();i++)
	{
		for(int j=1;i+j<s.length();j++)
		{
			if(checkss(s,0,i,j))return true;
		}
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		if(kq(s))cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

