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
		stack<int> a;
		int kq=0;
		a.push(-1);
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')a.push(i);
			else
			{
				a.pop();
				if(a.size()>0)
				{
					kq=max(kq,i-a.top());
				}
				else a.push(i);
			}
		}
		cout<<kq<<endl;
		
	}
}

