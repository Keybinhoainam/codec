#include<bits/stdc++.h>
using namespace std;

string tru(string s1,string s2)
{
	for(int i=s2.length();i<s1.length();i++)s2='0'+s2;
	for(int i=s1.length();i<s2.length();i++)s1='0'+s1;
//	if(s1<s2)swap(s1,s2);
//	ss(s1,s2);
	string s3="";
	int no=0,t;
	for(int i=s1.length();i>=0;i--)
	{
		t=(int)(s1[i]-48-s2[i]+48)-no;
		if(t<0)
		{
			t+=10;
			no=1;
		}
		else no=0;
		s3=(char)(t+48)+s3;
	}
	return s3;
}
void chia(string s1,string s2)
{
	int n1=s1.length(),n2=s2.length(),k;
	string s3=s1.substr(0,n2-1),kq="";
	for(int i=n2-1;i<n1;i++)
	{
		s3=s3+s1[i];
		while(s3[0]=='0')s3.erase(0,1);
		k=0;
		while(s3.length()>s2.length()||(s3.length()==s2.length()&&s3>s2))
		{
			s3=tru(s3,s2);
			k++;
		}
		kq=kq+(char)(k+48);
	}
	while(kq[0]==0)kq.erase(0,1);
	cout<<kq<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		chia(s1,s2);
	}
}

