#include<bits/stdc++.h>
using namespace std;
string cong(string a,string b)
{
	string c="";
	long long l1=a.length(),l2=b.length();
	if(l1>l2)
	{
		for(int i=0;i<l1-l2;i++)b='0'+b;
	}
	else
	{
		for(int i=0;i<l2-l1;i++)a='0'+a;
	}
	long long no=0,so1,so2,t;
	for(long long i=a.length()-1;i>=0;i--)
	{
		so1=a[i]-48;
		so2=b[i]-48;
		t=so1+so2+no;
		if(t>=10)
		{
			t-=10;
			no=1;
		}
		else no=0;
		c=(char)(t+48)+c;	
	}
	if(no>0)c='1'+c;
	return c;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string a,b,cmax,cmin,c,d;
		cin>>a>>b;
		long long i=0;
		while(i<a.length()&&a[i]=='0')i++;
		a.erase(0,i);
		i=0;
		while(i<b.length()&&b[i]=='0')i++;
		b.erase(0,i);
		c=a;d=b;
		for(int i=0;i<a.length();i++)
		{
		if(a[i]=='5') a.replace(i,1,"6");
		}
		for(int i=0;i<b.length();i++)
		{
		if(b[i]=='5')b.replace(i,1,"6");
		}
		cmax=cong(a,b);
//		cout<<a<<" "<<b;
		for(int i=0;i<c.length();i++)
		{
			if(c[i]=='6')c.replace(i,1,"5");
		}
		for(int i=0;i<d.length();i++)
		{
			if(d[i]=='6')d.replace(i,1,"5");
		}
		cmin=cong(c,d);
//		cout<<a<<" "<<b;
		cout<<cmin<<" "<<cmax;
		cout<<endl;
	}
}

