#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		cin>>k;
		string s;
		cin>>s;
		map<char,int>c;
		for(int i=0;i<s.length();i++)
		{
			c[s[i]]++;
		}
		priority_queue<long long,vector<long long>,less<long long> >q;
		for(auto it:c)
		{
			q.push(it.second);
		}
		int i=0;
		while(!q.empty()&&i<k)
		{
			int t=q.top()-1;q.pop();
			q.push(t);
			i++;
		}
		if(q.empty())cout<<0;
		else
		{
			long long tong=0;
			while(!q.empty())
			{
				tong+=pow(q.top(),2);q.pop();
			}
			cout<<tong;
		}
		cout<<endl;
	}
}

