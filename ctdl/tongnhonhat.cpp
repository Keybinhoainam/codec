#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		priority_queue<long long,vector<long long>,greater<long long> > q1;
//		priority_queue<long long,vector<long long>,less<long long> > q1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
//			q2.push(a[i]);
			q1.push(a[i]);
		}
		long long so1=0,so2=0;
		if(n%2!=0)
		{
			so1=q1.top();q1.pop();
		}
		int i=0;
		while(i<n/2)
		{
			so1=so1*10+q1.top();q1.pop();
			so2=so2*10+q1.top();q1.pop();
			i++;
		}
		cout<<so1+so2<<endl;
	}
}

