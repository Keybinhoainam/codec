#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,a[1005],x;
		cin>>n;
		priority_queue<long long ,vector<long long>,greater<long long> >q;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				x=abs(a[i]-a[j]);
				q.push(x);
			}
		}
		cout<<q.top()<<endl;
	}
}

