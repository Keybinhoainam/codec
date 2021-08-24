#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>a;
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			int x;
			cin>>x;
			a.push(x);
		}
		if(s=="POP")
		{
			if(!a.empty())a.pop();
		}
		if(s=="PRINTFRONT")
		{
			if(!a.empty())cout<<a.front();
			else cout<<"NONE";
			cout<<endl;
		}
	}
}

