#include<bits/stdc++.h>
using namespace std;
string cong(int k,string a,string b)
{
	string kq="";
	int no=0,t;
	for(int i=a.length();i<b.length();i++)a='0'+a;
	for(int i=b.length();i<a.length();i++)b='0'+b;
	for(int i=a.length()-1;i>=0;i--)
	{
		t=a[i]-'0'+b[i]-'0'+no;
		if(t>=k)
		{
			t-=k;
			no=1;
		}
		else no=0;
		kq=(char)(t+'0')+kq;
	}
	if(no>0)kq=(char)(no+'0')+kq;
	return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		string a,b;
		cin>>k>>a>>b;
		cout<<cong(k,a,b)<<endl;
	}
}

