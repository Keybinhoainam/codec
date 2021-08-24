#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,x;
		priority_queue<long long,vector<long long>,less<long long> >q;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		for(int i=0;i<k;i++)
		{
			cout<<q.top()<<" ";q.pop();
		}
		cout<<endl;
	}
}

