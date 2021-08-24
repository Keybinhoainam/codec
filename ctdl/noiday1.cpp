#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		long long a[n],tong=0,t;
		priority_queue<long long,vector<long long>,greater<long long>> q;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q.push(a[i]);
		}
		while(q.size()>1)
		{
			t=q.top();q.pop();
			t+=q.top();q.pop();
			tong+=t;
			q.push(t);
		}
		cout<<tong<<endl;
	}
}

