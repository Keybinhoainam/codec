#include<bits/stdc++.h>
using namespace std;
long long mod=pow(10,9)+7;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		long long c[n];
		priority_queue<long long,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			q.push(c[i]);
		}
		long long t1,t2,t3,kq=0;
		while(q.size()>1)
		{
			t1=q.top();q.pop();
			t2=q.top();q.pop();
			t3=(t1+t2)%mod;
			kq=(kq+t3)%mod;
			q.push(t3);
		}
		cout<<kq<<endl;
	}
}

