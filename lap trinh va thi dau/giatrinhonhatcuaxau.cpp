#include<bits/stdc++.h>
using namespace std;
//struct cmp{
//	bool operator()(pair<char,int> a,pair<char,int> b){
//		return a.second>b.second;
//	}
//};
bool cmp(pair<char,int>i,pair<char,int>j)
{
	return i.second>j.second;
}
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
		int n=s.length();
		map<char,int>a;
		for(int i=0;i<n;i++)
		{
			a[s[i]]++;
		}
		priority_queue<int,vector<int>,less<int>> q;
//		vector<pair<char,int>>q;
//		priority_queue<pair<char,int>> q;
		for(auto it:a)
		{
			q.push(it.second);
//			cout<<it.second<<" ";
		}
//		sort(q.begin(),q.end(),cmp);
		while(k--&&!q.empty())
		{
//			cout<<q.top()<<" ";
			if(q.top()>0)
			{
				int t=q.top();q.pop();
				t-=1;
				q.push(t);
//				sort(q.begin(),q.end(),cmp);
			}
			else break;
//			pair<char,int> top();q.pop();t=q.
//			if(t.second>0)t.second--;
//			q.push(t);
//			q.
		}
		long long tong=0;
		while(!q.empty())
		{
			int t=q.top();q.pop();
//			cout<<q.top().second<<" ";
			if(t>0)tong+=pow(t,2);
			else break;
		}
		cout<<tong<<endl;
	}
}

