#include<bits/stdc++.h>
using namespace std;
bool xddau(string s,int i)
{
	if(i==0)return 1;
	if(s[i-1]=='-')return 0;
	return 1;
}
void kt(string s,int a[],bool add)
{
	stack<bool>dau;//1: cong; 0:tru
//	s='+'+s;
	int n=s.length();
	dau.push(1);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='+'||s[i]=='-')
		{
			continue;
		}
		if(s[i]<='z'&&s[i]>='a')
		{
			if(dau.top())
			{
				a[s[i]-'a']+=(xddau(s,i)?add?1:-1 : add?-1:1);
			}
			else
			{
				a[s[i]-'a']+=(xddau(s,i)?add?-1:1 : add?1:-1);
			}
		}
		else
		{
			if(s[i]=='(')
			{
				bool dau1=xddau(s,i);
				bool daux=(dau.top())?dau1 : !dau1;
				dau.push(daux);
			}
			else
			{
				if(s[i]==')')dau.pop();
			}
		}
	}
}
bool comp(string s1,string s2)
{
	int a[26];
	for(int i=0;i<26;i++)a[i]=0;
	kt(s1,a,1);
	kt(s2,a,0);
	for(int i=0;i<26;i++)
	{
		if(a[i]!=0)return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(comp(s1,s2))cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

