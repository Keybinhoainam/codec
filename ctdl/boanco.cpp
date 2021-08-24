#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>i,pair<int,int>j)
{
	return i.first<j.first;
}
int main()
{
	int n,d;
	cin>>n>>d;
	pair<int,int>bo[n];
	for(int i=0;i<n;i++)
	{
		cin>>bo[i].first>>bo[i].second;
	}
	vector<pair<int,int>>a;
	for(auto i:bo)
	{
		a.push_back(i);
	}
	sort(a,a+n,comp);
	for(int i=0;i<n;i++)
	{
		
	}
}

