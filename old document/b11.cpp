#include<bits/stdc++.h>
using namespace std;
int n;
string s1,s2;

void ss()
{
	if(s1.length()>s2.length())
	{
		for(int i=s2.length();i<s1.length();i++)
		{
		s2=(char)'0'+s2;
		}
	}
	else
	{
		if(s1.length()<s2.length())
		{
			for(int i=s1.length();i<s2.length();i++)
			{
			s1='0'+s1;
			}
		}
	}
//	if(s2.length() > s1.length() || (s1.length() == s2.length() && s2 > s1))swap(s1,s2);
}
void cong()
{
	string s3="";
	char kq;
	int i,no=0,kqint=0,kq1,kq2;
	ss();
	for(int i=s1.length()-1;i>=0;i--)
	{
		kq1=s1[i]-48;kq2=s2[i]-48;
		kqint=(int)kq1+(int)kq2+no;
		if(kqint<10)no=0;
		else 
		{
			no=1;
			kqint-=10;
		}
		kq=(char)(kqint+48);
		s3=kq+s3;
	}
	kq=(char)(no+48);
	if(no!=0)s3=kq+s3;
	cout<<s3;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		cong();
		cout<<endl;
	}
}
