#include<bits/stdc++.h>
using namespace std;
int main()
{
	
		long long n;
		cin>>n;
		long long a[n+5];
		priority_queue<long long,vector<long long>,greater<long long> >q2;
		priority_queue<long long,vector<long long>,less<long long> >q1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(i%2==0)q1.push(a[i]);
			else q2.push(a[i]);
		}
		for(int i=1;i<=n/2;i++)
		{
			cout<<q2.top()<<" ";
			q2.pop();
			cout<<q1.top()<<" ";
			q1.pop();
		}
		if(!q2.empty())cout<<q2.top();
//		cout<<endl;
	
}

