#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		deque<int> q;
		q.push_back(0);
//		for(int i=1;i<k;i++)
//		{
//			if(a[i]>a[q.front()])
//			{
//				q.pop_front();
//				q.push_front(i);
//			}
//		}
		for(int i=1;i<k;i++)
		{
			while(!q.empty()&&a[q.back()]<a[i])
			{
				q.pop_back();
			}
			q.push_back(i);
		}
		cout<<a[q.at(0)]<<" ";
//cout<<a[q.at(0)]<<endl;
		for(int i=k;i<n;i++)
		{
//			cout<<a[q.at(0)]<<" ";
			while(!q.empty()&&a[q.back()]<a[i])
			{
				q.pop_back();
			}
			while(q.front()<i-k+1&&!q.empty())
			{
				q.pop_front();
			}
			q.push_back(i);
			cout<<a[q.front()]<<" ";
//			cout<<q.size()<<"      ";
//			for(int i=0;i<q.size();i++)
//			{
//				cout<<a[q.at(i)]<<" ";
//			}
//			cout<<"."<<endl;
		}
//		cout<<a[q.at(0)];
		cout<<endl;
	}
}

