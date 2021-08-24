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
		cin>>n;
		priority_queue<long long,vector<long long>,less<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		cout<<q.top();
		cout<<endl;
	}
}

