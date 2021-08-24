#include<bits/stdc++.h>
using namespace std;
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
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		nhan(s1,s2);
	}
}
