#include<bits/stdc++.h>
using namespace std;
string s1,s2;
string cong()
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
//	cout<<"ket qua:\n";
	if(no>0)
	{
		s3=(char)(no+48)+s3;
		
	}
//	if(s3.length()>8)cout<<"so bi tran";
	return s3;
}
int main()
{
	cout<<"nhap 2 so nhi phan khong dau: \n";
		cin>>s1>>s2;
		cout<<cong();
		cout<<endl;

}

