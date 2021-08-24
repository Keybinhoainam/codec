#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,s,i,j,s1,s2;
	string somax,somin;
	cin>>m>>s;
	s1=s;
	s2=s;
	if(s>0&&s<=9*m)
	{
		for(i=1;i<=m;i++)
		{
			j=9;
			while(s2-j<0)j--;
			char t=(char)j+48;
   			somax=somax+t;
			s2=s2-j;
		}
		for(i=1;i<m;i++)
		{
			j=9;
			while(s1-j<=0)j--;
			char t=(char)j+48;
   			somin=t+somin;
			s1=s1-j;
		}
		if(i==m)
		{
			char t=(char)s1+48;
			somin=t+somin;
		}
		cout<<somin<<" "<<somax;

	}
	else
	{
		if(m>=2)cout<<"-1 -1";
		else cout<<s<<" "<<s;
	}
}
