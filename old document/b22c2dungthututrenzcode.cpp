#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		priority_queue<long long,vector<long long>,greater<long long> >q;
		long long n,x;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>-1)q.push(x);
		}
		for(int i=0;i<n;i++)
		{
			if(q.top()==i)
			{
				cout<<q.top()<<" ";q.pop();
				while(q.top()==i&&q.size()>0)q.pop();
			}
			else cout<<-1<<" ";
		}
		cout<<endl;
	}
}

