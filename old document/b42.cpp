#include<iostream>
#include<vector>
#include<queue>
using namespace std;
long long n,x,i;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(i=1;i<=n;i++)
		{
			cin>>x;
			q.push(x);
		}
		long long t=q.top();
		while(q.size()>0)
		{
			if(t==q.top())q.pop();
			else
			{
				cout<<t<<" "<<q.top();
				break;
			}
		}
		if(q.size()==0)cout<<-1;
		cout<<endl;
	}
}

