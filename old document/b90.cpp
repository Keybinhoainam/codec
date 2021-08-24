#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,k,x;
		cin>>n>>k;
		priority_queue<long long, vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>x;
				q.push(x);
			}
		}
		for(int i=1;i<=k-1;i++)q.pop();
		cout<<q.top()<<endl;
	}
}

