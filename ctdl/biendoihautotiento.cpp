#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		stack<string>kq;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
			{
				string tmp="";
				tmp+=s[i];
				kq.push(tmp);
			}
			if(s[i]=='+'||s[i]=='*'||s[i]=='-'||s[i]=='/'||s[i]=='^')
			{
				string tmp="";
				string s1=kq.top();kq.pop();
				string s2=kq.top();kq.pop();
				tmp=s[i]+s2+s1;
				kq.push(tmp);
			}
		}
		cout<<kq.top()<<endl;
	}
}

