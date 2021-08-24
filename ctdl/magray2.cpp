#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		int tt=0,t=0;
		cin>>s;
//		for(int i=s.length()-1;i>=0;i--)
//		{
//			if(s[i]=='1')tt+=pow(2,t);
//			t++;
//		}
		map<int,string>l1,l2;
		l1[0]="0";l1[1]="1";
		int i=1;
		while(i<s.length())
		{
			for(int j=pow(2,i)-1;j>=0;j--)
			{
				string s1=l1[j];
				l1[j]="0"+l1[j];
				l2[pow(2,i)-1-j]="1"+s1;
			}
			for(int j=pow(2,i);j<pow(2,i+1);j++)l1[j]=l2[j-pow(2,i)];
			i++;
		}
	
		for(i=0;i<pow(2,s.length())-1;i++)
		{
			if(l1[i]==s)break;
		}
		int snp=i;
		map<int,int>a;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(snp>=pow(2,i))
			{
				snp-=pow(2,i);
				a[i]=1;
			}
			cout<<a[i];
		}
		cout<<endl;
	}
}
