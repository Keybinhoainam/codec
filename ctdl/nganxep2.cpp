#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	vector<int>a;
	while(T--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			int n;
			cin>>n;
			a.push_back(n);
		}
		if(s=="POP"&&!a.empty())
		{
			a.pop_back();
		}
		if(s=="PRINT")
		{
			if(a.empty())cout<<"NONE";
			else cout<<a[a.size()-1];
			cout<<endl;
		}
	}
}

