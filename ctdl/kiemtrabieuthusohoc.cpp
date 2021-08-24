#include<bits/stdc++.h>
using namespace std;
string kt()
{
		stack<char>a;
		string s;
		getline(cin,s);
		int n=s.length();
		for(int i=0;i<n;i++)
		{
			if(s[i]==')')
			{
				char t=a.top();
				a.pop();
				bool c=1;
				while(t!='(')
				{
					if(t=='+'||t=='-'||t=='*'||t=='/')
					{
						c=0;
					}
					t=a.top();
					a.pop();
				}
				if(c==1)return "Yes";
			}
			else a.push(s[i]);
		}
		return "No";
		
			
}
int main()
{
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
		cout<<kt()<<endl;
	}
}

