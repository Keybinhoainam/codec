#include<bits/stdc++.h>
using namespace std;
bool comp(pair<char,long long> a,pair<char,long long> b)
{
	return a.first<b.first;
}
void kt()
{
	int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)cin>>s[i];
	map<char,long long>a;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s[i].length();j++)
		{
			a[s[i][j]]++;
		}
	}
	vector<pair<char,long long>>q;
	for(auto i:a)
	{
		q.push_back(i);
	}
	sort(q.begin(),q.end(),comp);
	for(auto i:q)
	{
		cout<<i.first<<" ";
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		kt();
		
	}
}

