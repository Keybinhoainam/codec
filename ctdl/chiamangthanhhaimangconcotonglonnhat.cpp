#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		priority_queue<long long,vector<long long>,less<long long> > q1;
		long long tong=0,tong1=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q1.push(a[i]);
			tong+=a[i];
		}
		int so=(n-k>k)?n-k:k;
		for(int i=0;i<so;i++)
		{
			tong1+=q1.top();q1.pop();
		}
		cout<<2*tong1-tong<<endl;
	}
}

