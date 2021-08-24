#include<iostream>
#include<queue>
using namespace std;

long long n,m,a[1000000],x;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		priority_queue<long long,vector<long long>,greater<long long> >q2;
		priority_queue<long long,vector<long long>,less<long long> >q1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q1.push(a[i]);
		}
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			q2.push(a[i]);
		}
		long long kq=q1.top()*q2.top();
		cout<<kq<<endl;
	}
}

