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
		int n=s.length();
		stack<char>a;
		string kq="";
		for(int i=0;i<n;i++)
		{
			if(s[i]==']')
			{
				string s1;
				
				while(!a.empty()&&a.top()!='[')
				{
					s1=a.top()+s1;
					a.pop();
				}
				a.pop();
				string so="";
				if(a.empty()||!(a.top()<='9'&&a.top()>='0'))so="1";
				
				while(!a.empty()&&a.top()<='9'&&a.top()>='0')
				{
					so=a.top()+so;
					a.pop();
				}
				int t=stoi(so);
				string s2=s1;
				for(int j=1;j<t;j++)
				{
					s1=s1+s2;
				}
				for(int j=0;j<s1.length();j++)
				{
					a.push(s1[j]);
				}
			}
			else a.push(s[i]);
		}
		while(!a.empty())
		{
			kq=a.top()+kq;
			a.pop();
		}
		cout<<kq<<endl;
	}
}

