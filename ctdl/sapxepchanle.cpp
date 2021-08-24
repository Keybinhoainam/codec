#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	int a[n];
	priority_queue<ll,vector<ll>,greater<ll> > q1;
	priority_queue<ll,vector<ll>,less<ll> > q2;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if((i+1)%2!=0)q1.push(a[i]);
		else q2.push(a[i]);
	}
	for(int i=1;i<=n/2;i++)
	{
		cout<<q1.top()<<" "<<q2.top()<<" ";q1.pop();q2.pop();
	}
	if(n%2!=0)cout<<q1.top();
	cout<<endl;
}

