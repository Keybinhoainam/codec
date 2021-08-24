#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,a[1005],x;
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> >q1;
		priority_queue<long long,vector<long long>,less<long long> >q2;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q1.push(a[i]);
			q2.push(a[i]);
		}
		x=n/2;
		for(int i=0;i<x;i++)
		{
			cout<<q2.top()<<" ";q2.pop();
			cout<<q1.top()<<" ";q1.pop();
		}
		if(n%2!=0)cout<<q1.top();
		cout<<endl;
	}
}

