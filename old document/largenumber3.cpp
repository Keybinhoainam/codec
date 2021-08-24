#include<bits/stdc++.h>
using namespace std;
string s1,s2;
string nhan()
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
//	for(int i=s3.length()+1;i<=16;i++)s3="0"+s3;
	return s3;
}
int main()
{
	cout<<"nhap 2 so nhi phan:\n";
		cin>>s1>>s2;
		cout<<"ket qua cua nhan 2 so nhi phan la:\n"<<nhan()<<endl;
}

