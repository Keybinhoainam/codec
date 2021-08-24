#include<bits/stdc++.h>
using namespace std;
long long n,a[10000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		priority_queue<long long, vector<long long>,greater<long long> >q1;
		priority_queue<long long, vector<long long>,less<long long> >q2;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			q1.push(a[i]);
			q2.push(a[i]);
		}
		for(int i=1;i<=n;i++)
		{
   			if(i%2==0)
			{
				cout<<q1.top()<<" ";q1.pop();
			}
			else
			{
				cout<<q2.top()<<" ";q2.pop();
			}
		}
		cout<<endl;
	}
}

