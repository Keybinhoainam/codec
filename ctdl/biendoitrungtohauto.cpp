#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int thutu(char dau)
{
	if(dau=='^')return 3;
	if(dau=='*'||dau=='/')return 2;
	if(dau=='+'||dau=='-')return 1;
	return -1;
}
string kt()
{
	string kq="";
	stack<char>tmp;
//	tmp.push('N');
	for(int i=0;i<n;i++)
	{
		if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A'))kq=kq+s[i];
		else
		{
			if(s[i]=='(')tmp.push(s[i]);
			else if(s[i]==')'){
				while(!tmp.empty()&&tmp.top()!='(')
				{
					char c=tmp.top();tmp.pop();
					kq=kq+c;
				}
//				if(tmp.top()=='(')
				tmp.pop();
			}else
			{
				while(!tmp.empty()&&thutu(tmp.top())>=thutu(s[i]))
				{
					char c=tmp.top();tmp.pop();
					kq+=c;
				}
				tmp.push(s[i]);
			}
		}
	}
	while(!tmp.empty())
	{
		//tmp.top()!='N'
		char c=tmp.top();tmp.pop();
//		cout<<c<<endl;
		kq+=c;
	}
	return kq;
}
int main()
{
	int T;
	cin>>T;
//	cin.ignore();
	while(T--)
	{
		cin>>s;
		 n=s.length();
		cout<<kt()<<endl;
	}
}

