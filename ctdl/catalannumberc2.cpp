#include<bits/stdc++.h>
using namespace std;
string cong(string s1,string s2)
{
	for(int i=s1.length();i<s2.length();i++)s1='0'+s1;
	for(int i=s2.length();i<s1.length();i++)s2='0'+s2;
	string s3="";
	int no=0;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int t=(int)(s1[i]-48)+(int)(s2[i]-48)+no;
		if(t>9)
		{
			no=1;
			t-=10;
		}
		else no=0;
		s3=(char)(t+48)+s3;
		
	}
	if(no>0)
	{
		s3=(char)(no+48)+s3;
		
	}
	return s3;
}
string nhan(string s1,string s2)
{
	string s3="";
	int l1=s1.length(),l2=s2.length();
	int a[l1+l2];
	for(int i=0;i<l1+l2;i++)a[i]=0;
	for(int i=l1-1;i>=0;i--)
	{
		for(int j=l2-1;j>=0;j--)
		{
			int t1=(int)(s1[i]-48),t2=(int)(s2[j]-48);
			a[i+j+1]+=t1*t2;
		}
	}
	for(int i=l1+l2-1;i>=1;i--)
	{
		a[i-1]+=(a[i]/10);
		a[i]=a[i]%10;
		char t=(char)(a[i]+48);
		s3=t+s3;
	}
	if(a[0]>0)
	{
		char t=a[0]+48;
		s3=t+s3;
	}
	return s3;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		map<int,string>a;
		a[0]="1";
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=i-1;j++)
			{
				a[i]=cong(a[i],nhan(a[j],a[i-j-1]));
			}
		}
		cout<<a[n]<<endl;
		
	}
}

