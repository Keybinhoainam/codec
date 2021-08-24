#include<iostream>
#include<queue>
using namespace std;
long long n,a,luythua[20],max1=0;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long s,n;
		cin>>s>>n;
		priority_queue<long long,vector<long long>,less<long long> >q;
		while(n>0)
		{
			if(n%10==2)q.push(2);
			if(n%10==3)q.push(3);
			if(n%10==4)
			{
				q.push(3);q.push(2);q.push(2);
			}
			if(n%10==5)q.push(5);
			if(n%10==6)
			{
				q.push(5);q.push(3);
			}
			if(n%10==7)q.push(7);
			if(n%10==8)
			{
				q.push(7);q.push(2);q.push(2);q.push(2);
			}
			if(n%10==9)
			{
				q.push(7);q.push(3);q.push(3);q.push(2);
			}
			n/=10;
		}
		while(q.size()>0)
		{
			cout<<q.top();q.pop();
		}
		cout<<endl;

	}
}

