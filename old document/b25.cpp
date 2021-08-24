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
		cin>>n>>k;
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		int i=1;
		while(i<=k)
		{
			if(i==k)cout<<q.top();
			q.pop();
			i++;
		}
		cout<<endl;
	}
}

