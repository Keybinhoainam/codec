#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x,t1,t2;
		priority_queue<long long,vector<long long>,greater<long long> >q1;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			cin>>x;
			q1.push(x);
		}
		if(q1.top()==1)
		{
			t1=1;q1.pop();
			while(q1.top()-t1==1&&q1.size()>0)
			{
				t1=q1.top();
				q1.pop();
			}
			cout<<t1+1<<endl;
		}
		
	}
}

