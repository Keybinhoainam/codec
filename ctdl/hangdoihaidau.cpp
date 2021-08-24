#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>q;
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		int x;
		cin>>s;
		if(s=="PUSHFRONT")
		{
			cin>>x;
			q.push_front(x);
		}
		if(s=="PRINTFRONT")
		{
			if(!q.empty())cout<<q.front();
			else cout<<"NONE";
			cout<<endl;
		}
		if(s=="POPFRONT")
		{
			if(!q.empty())q.pop_front();
		}
		if(s=="PUSHBACK")
		{
			cin>>x;
			q.push_back(x);
		}
		if(s=="PRINTBACK")
		{
			if(!q.empty())cout<<q.back();
			else cout<<"NONE";
			cout<<endl;
		}
		if(s=="POPBACK")
		{
			if(!q.empty())q.pop_back();
		}
	}
}

