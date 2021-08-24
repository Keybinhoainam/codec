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
		stack<string>a;
//		vector<string>a;
		int n=s.length();
		for(int i=n-1;i>=0;i--)
		{
			if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
			{
				string s1="";
				s1+=s[i];
				a.push(s1);
			}
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				string s1="";
				string s2=a.top();a.pop();
				string s3=a.top();a.pop();
				s1="("+s2+s[i]+s3+")";
				a.push(s1);
			}
		}
		cout<<a.top()<<endl;
	}
}

