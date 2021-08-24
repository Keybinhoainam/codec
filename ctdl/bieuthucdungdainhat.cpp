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
		stack<int>a;
		a.push(-1);
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')a.push(i);
			if(s[i]==')')
			{
				if(a.top()<n&&a.top()!=-1)a.pop();
				else
				{
					a.push(i+n);
				}
			}
		}
//		cout<<a.top()<<endl;
		int t=n,kq=0;
		while(!a.empty())
		{
			if(a.top()>=n)a.top()-=n;
//			if(t>a.top()+1&&a.top()<n)
			kq+=t-a.top()-1;
			t=a.top();a.pop();
			
		}
		cout<<kq<<endl;
	}
}

