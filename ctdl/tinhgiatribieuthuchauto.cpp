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
		stack<int>a;
//		vector<string>a;
		int n=s.length();
		for(int i=0;i<n;i++)
		{
			if(s[i]>='1'&&s[i]<='9')
			{
				
				a.push(s[i]-'0');
			}
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				int s2=a.top();a.pop();
				int s3=a.top();a.pop();
				int s4;
				switch(s[i])
				{
					case '+':
						s4=s3+s2;
						break;
					case '-':
						s4=s3-s2;
						break;
					case '*':
						s4=s3*s2;
						break;
					case '/':
						s4=s3/s2;
						break;	
				}
				a.push(s4);
//				cout<<s4<<endl;
			}
		}
		cout<<a.top()<<endl;
	}
}

