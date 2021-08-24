#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s[100]={};
	cin>>s[0];
	int t=0;
	while(getchar()!='\n')
	{
		cin>>s[++t];
	}
	for(int i=0;i<t;i++)
	{
		char s1=(char)(s[i][0]-32);
		if(s[i][0]>='A'&&s[i][0]<='Z')cout<<s[i][0];
		else cout<<s1;
		for(int j=1;j<s[i].length();j++)
		{
			char s1=s[i][j]+32;
		if(s[i][j]>='A'&&s[i][j]<='Z')cout<<s1;
		else cout<<s[i][j];
		}
		if(i<t-1)cout<<" ";
	}
	cout<<", ";
	for(int i=0;i<s[t].length();i++)
	{
		char s1=s[t][i]-32;
		if(s[t][i]>='A'&&s[t][i]<='Z')cout<<s[t][i];
		else cout<<s1;
	}
	cout<<endl;
}

