#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,m,x;
		cin>>n>>m;
		priority_queue<long long,vector<long long>,greater<long long> >q1;
		for(long long i=0;i<n+m;i++)
		{
			cin>>x;
			q1.push(x);
		}
		for(long long i=0;i<n+m;i++)
		{
			cout<<q1.top()<<" ";q1.pop();
		}
		cout<<endl;
	}
}

