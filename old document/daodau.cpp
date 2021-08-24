#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		long long n,k;
		cin>>n>>k;
		long long a[n];
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q.push(a[i]);
		}
		long long t;
		for(int i=0;i<k;i++)
		{
			t=q.top();q.pop();
			q.push(-t);
		}
		long long tong=0;
		while(!q.empty())
		{
			tong+=q.top();q.pop();
		}
		cout<<tong<<endl;
//	}
}

