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
//		int a[n];
		vector<int>::iterator it;
		vector<int>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)
		{
			it=upper_bound(a.begin(),a.end(),a[i]);
			cout<<it-a.begin()<<" ";
//			if(it!=a.end())cout<<a[it-a.begin()]<<" ";
//			else cout<<-1<<" ";
		}
	}
}

