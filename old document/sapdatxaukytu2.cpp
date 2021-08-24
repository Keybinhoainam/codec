#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long,long long>i,pair<long long,long long>j)
{
	return i.second>j.second;
}
int solve(map<long long,long long>a,int d,int n)
{
	vector<pair<long long,long long>> b;
	for(auto it:a)
	{
		b.push_back(it);
	}
	sort(b.begin(),b.end(),comp);
//	return b[0].second;
	int i=0;
	for(auto it:b)
	{
//		cout<<it.first<<" ";
		for(int j=0;j<it.second;j++)
		{
			if(i+j*d>n)return -1;
		}
		i++;
	}
	return 1;
}
void kt(int d,string s)
{
	int n=s.length();
	map<long long,long long>a;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]]++;
	}
	cout<<solve(a,d,n)<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int d;
		cin>>d;
		string s;
		cin>>s;
		kt(d,s);
	}
}

