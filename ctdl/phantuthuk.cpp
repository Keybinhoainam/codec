#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,m,k;
		cin>>n>>m>>k;
		long long x;
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		for(int i=0;i<m;i++)
		{
			cin>>x;
			q.push(x);
		}
		int i=0;
		while(i<k-1)
		{
			q.pop();
			i++;
		}
		cout<<q.top()<<endl;
	}
}

