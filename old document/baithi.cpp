#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
	if(s[0]<s[1]&&s[1]<s[2]&&s[2]<s[3]&&s[3]<s[4])return 1;
	if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4])return 1;
	if(s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4])return 1;
	if((s[0]=='6'||s[0]=='8')&&(s[1]=='6'||s[1]=='8')&&(s[2]=='6'||s[2]=='8')&&(s[3]=='6'||s[3]=='8')&&(s[4]=='6'||s[4]=='8'))return 1;
	return 0;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		if(kt(s)==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

