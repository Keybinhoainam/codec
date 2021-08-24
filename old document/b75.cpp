#include<bits/stdc++.h>
using namespace std;
const long long m=pow(10,9)+7;
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
void nhan(string s1,string s2)
{
	string s;
	int l1=s1.length(),l2=s2.length();
	int* a=new int [l1+l2];
	for(int i=0;i<l1+l2;i++)
	{
		a[i]=0;
	}
	for(int i=l1-1;i>=0;i--)
	{
		for(int j=l2-1;j>=0;j--)
		{
			a[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
		}
	}
	for(int i=l1+l2-1;i>=1;i--)
	{
		a[i-1]=a[i-1]+(a[i]/10);
		a[i]=a[i]%10;
		s=(char)(a[i]+'0')+s;
	}
	if(a[0]!=0)s=(char)(a[0]+'0')+s;
	cout<< s<<endl;
}
string power(string a,long long b)
{
	if(b==1)return a;
	else
	{
		long long t=power(a,b/2);
		if(b%2==0)return (t%m*t%m)%m;
		else return ((t%m*t%m)%m*a%m)%m;
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x,a[2002],tong=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tong=(tong+a[i]*power(x,n-1-i))%m;
		}
		cout<<tong<<endl;
	}
}

