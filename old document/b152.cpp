#include<bits/stdc++.h>
using namespace std;
string tru(string s1,string s2)
{
	int n1=s1.length(),n2=s2.length();
	for(int i=n1;i<n2;i++)
	{
		s1='0'+s1;
	}
	for(int i=n2;i<n1;i++)
	{
		s2='0'+s2;
	}
	if(s1<s2)swap(s1,s2);
	n1=s1.length();n2=s2.length();
	string s3;
	int no=0,t,kq;
	for(int i=0;i<n2;i++)
	{
		t=(s1[n1-1-i]-'0')-(s2[n1-1-i]-'0')-no;
		if(t>=0)
		{
			no=0;
		}
		else
		{
			no=1;
			t+=10;
		}
		s3=(char)(t+'0') +s3;
	}
	for(int i=n2;i<n1;i++)
	{
		t=(s1[n1-1-i]-'0')-no;
		if(t>=0)
		{
			no=0;
		}
		else
		{
			no=1;
			t+=10;
		}
		s3=(char)(t+'0') +s3;
	}
	int i=0,n3=s3.length();
	while(s3[i]=='0'&&i<n3-1)
	{
		i++;
	}
	s3=s3.substr(i,n3-i);
	return s3;
}
string chia(string s1,string s2)
{
	int n2=s2.length();
	int n1=s1.length();
	string kq="";
	string s3;
	s3=s1.substr(0,n2-1);
	for(int i=n2-1;i<n1;i++)
	{
		s3=s3+s1[i];
		while( s3.length()>1 && s3[0]=='0' ) s3.erase(0,1);
		int dem=0;
		while(s3.length()>s2.length()||(s3.length()==s2.length()&&s3>=s2))
		{
			s3=tru(s3,s2);
			dem++;
		}
		kq=kq+(char)(dem+'0');
	}
	while(kq[0]=='0'&&kq.length()>1)kq.erase(0,1);
	return kq;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		string s1;
		string s2;
		cin>>s1>>s2;
//		if(s1.length()>=s2.length())cout<<chia(s1,s2)<<endl;
//		else cout<<"0"<<endl;
		cout<<tru(s1,s2)<<endl;
	}
}

