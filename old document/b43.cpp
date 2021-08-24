#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
long long n,t,min1,x,min12;
long long a[1005];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		priority_queue<long long, vector<long long>,greater<long long > >q1;
		priority_queue<long long, vector<long long>,less<long long > >q2;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=0) q1.push(a[i]);
			else q2.push(a[i]);
		}
		long t1,t2,u1,u2,s1,s2;
		s1=q1.size();s2=q2.size();
		min1=a[0]+a[1];
		min12=abs(a[0]+a[1]);
		if(q1.size()>=1)
		{
			t1=q1.top();q1.pop();
			cout<<t1<<" ";
			if(q1.size()>=1)
			{
				t2=q1.top();q1.pop();
				cout<<t2<<" ";
			}
		}
		if(q2.size()>=1)
		{
			u1=q2.top();q2.pop();
			cout<<u1<<" ";
			if(q2.size()>=1)
			{
				u2=q2.top();q2.pop();
				cout<<u2<<" ";
			}
		}
		if(min12>abs(t1+u1)&&s1>=1&&s2>=1)min1=t1+u1;
		if(min12>abs(t1+t2)&&s1>=2)min1=t1+t2;
		if(min12>abs(t2+u2)&&s1>=2&&s2>=2)min1=t2+u2;
		if(min12>abs(u1+u2)&&s2>=2)
		{
			min1=u1+u2;
			cout<<1<<endl;
		}
		cout<<min1<<endl;
	}
}

