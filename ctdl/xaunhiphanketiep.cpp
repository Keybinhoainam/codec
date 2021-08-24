#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s[1000];
		cin>>s;
		int i=strlen(s)-1;
		while(i>=0&&s[i]=='1')i--;
		if(i<0)
		{
			for(int j=0;j<strlen(s);j++)cout<<"0";
		}
		else
		{
			for(int j=0;j<i;j++)cout<<s[j];
			cout<<'1';
			for(int j=i+1;j<strlen(s);j++)cout<<'0';
//cout<<s[i]<<" ";
//			s[i]='1';
//			cout<<s;
		}
		cout<<endl;
	}
}

