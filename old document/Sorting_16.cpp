#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		map<int ,int >b,check;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		priority_queue<int ,vector<int>,less<int> >q;
		int t=0;
		for(int i=0;i<n;i++)
		{
			if(check[b[a[i]]]==0)
			{
				check[b[a[i]]]=1;
				t++;
				q.push(b[a[i]]);
			}
		}
		sort(a,a+n);
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(b[a[j]]==q.top())
				{
					cout<<a[j]<<" ";
				}
			}
			q.pop();
		}
		cout<<endl;
	}
}

