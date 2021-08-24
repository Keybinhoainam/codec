#include<bits/stdc++.h>
using namespace std;
long long x;
bool comp(long long i,long long j)
{
	return abs(x-i)<abs(x-j);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n>>x;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		stable_sort(a,a+n,comp);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

