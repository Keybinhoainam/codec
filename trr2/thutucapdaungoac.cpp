#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
		string s;
		getline(cin,s);
		int n=s.length();
		int dau=1;
		stack<int> kq;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(')
			{
				cout<<dau<<" ";
				kq.push(dau);
				dau++;
			}
			if(s[i]==')')
			{
				cout<<kq.top()<<" ";kq.pop();
			}
		}
		cout<<endl;
	}
}

