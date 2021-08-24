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
		stack<int>st;
		st.push(-1);
		int kq=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')st.push(i);
			else
			{
				st.pop();
				if(!st.empty())
				{
					kq=max(kq,i-st.top());
//					st.pop();
				}
				else st.push(i);
			}
		}
		cout<<kq<<endl;
	}
}

