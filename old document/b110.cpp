#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,k,x;
		cin>>n>>k;
		long long a[n+5];
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		for(int i=0;i<k-1;i++)q.pop();
		cout<<q.top()<<endl;

	}
}

