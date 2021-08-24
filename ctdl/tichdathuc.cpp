#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n;
		cin>>m>>n;
		long long p[m],q[n];
		map<int,long long>a;
		for(int i=0;i<m;i++)cin>>p[i];
		for(int i=0;i<n;i++)cin>>q[i];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i+j]+=(p[i]*q[j]);
			}
		}
		for(int i=0;i<m+n-1;i++)cout<<a[i]<<" ";
		cout<<endl;
	}
}

