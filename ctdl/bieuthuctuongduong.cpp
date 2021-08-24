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
		s='+'+s;
		int n=s.length();
		stack<int>tmp;
		tmp.push(1);
		for(int i=1;i<n;i++)
		{
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))cout<<s[i];
			else
			{
				if(s[i]=='('&&s[i-1]=='-')tmp.push(-1);
				else
				{
					if(s[i]=='('&&s[i-1]=='+')tmp.push(1);
					else 
					{
						if(s[i]==')')tmp.pop();
						else
						{
							if(tmp.top()==-1)
							{
								if(s[i]=='+')
								{
									s[i]='-';
									cout<<'-';
								}
								else 
								{
									if(s[i]=='-')
									{
										s[i]='+';
										cout<<'+';
									}
								}
							}
							if(tmp.top()==1)
							{
								if(s[i]=='+')cout<<'+';
								if(s[i]=='-') cout<<'-';
							}
						}
					}
				}
			}
		}
		cout<<endl;
	}
}
