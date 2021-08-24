#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void ss()
{
	for(int i=s1.length();i<s2.length();i++)s1='0'+s1;
	for(int i=s2.length();i<s1.length();i++)s2='0'+s2;
	if(s1<s2)swap(s1,s2);
}
string tru()
{
	string s3="";
	ss();
	int no=0;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int t=s1[i]-s2[i]-no;
		if(t<0)
		{
			no=1;
			t+=10;
		}
		else no=0;
		s3=(char)(t+48)+s3;
		
	}
	return s3;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>s1>>s2;
		cout<<tru();
		cout<<endl;
	}
}

